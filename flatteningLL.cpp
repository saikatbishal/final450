#include <iostream>
#include <stdio.h>
#include<stdlib.h>
using namespace std;
struct Node 
{ 
    int data; 
    struct Node *right; 
    struct Node *down;
};

void push(Node** head_ref, int new_data) 
{
    Node *new_node = *head_ref;
    new_node->right = NULL; 
    new_node->data  = new_data; 
    new_node->down = (*head_ref); 
    (*head_ref)    = new_node; 
} 
void printList(Node *node) 
{ 
    while (node != NULL) 
    { 
        printf("%d ", node->data); 
        node = node->down; 
    } 
}
Node* merge(Node* a, Node* b)
{
    if (a == NULL)
        return b;
    if (b == NULL)
        return a;
    Node *result;
    if (a->data < b->data)
    {
        result = a;
        result->down = merge(a->down, b);
    }
    if (a->data >= b->data)
    {
        result = b;
        result->down = merge(a,b->down);
    }
    result->right = NULL;
    return result;
}
Node* flatten(Node* root)
{
    if (root == NULL || root->right == NULL)
        return root;
    return merge(root, flatten(root->right));
}
int main() 
{ 
    Node* root = NULL; 
    /* Let us create the following linked list 
    5 -> 10 -> 19 -> 28 
    |    |     |     | 
    7    20    22    35 
    |          |     | 
    8          50    40 
    |                | 
    30               45 
    */
    push( &root, 30 ); 
    push( &root, 8 ); 
    push( &root, 7 ); 
    push( &root, 5 ); 

    push( &( root->right ), 20 ); 
    push( &( root->right ), 10 ); 

    push( &( root->right->right ), 50 ); 
    push( &( root->right->right ), 22 ); 
    push( &( root->right->right ), 19 ); 

    push( &( root->right->right->right ), 45 ); 
    push( &( root->right->right->right ), 40 ); 
    push( &( root->right->right->right ), 35 ); 
    push( &( root->right->right->right ), 20 ); 

    // Let us flatten the list 
    root = flatten(root); 

    // Let us print the flatened linked list 
    printList(root); 

    return 0; 
}