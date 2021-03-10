#include <iostream>
using namespace std;
struct Node
{
    Node *left;
    Node *right;
    int data;
};
Node* MakeNode(int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}
Node* Insert(Node* root, int data)
{
    if (root == NULL)
    {
        root = MakeNode(data);
        return root;
    }
    else{
        if (root->data > data)
            root->left = Insert(root->left, data);
        if (root->data < data)
            root->right = Insert(root->right, data);
        }
        return root;
}
void Print( Node* root)
{
if(root== NULL)
    return;
else 
{
    Print(root->right);
    cout << root->data<<" ";
}
}
Node* FindMin(Node* root)
{
if(root->left == NULL)
    return root;
else
    return FindMin(root->left);
}
struct Node* DeleteNode(Node* root, int data)
{
    if(root == NULL)
        return root;
    else if(root->data < data)
        root->right = DeleteNode(root->right, data);
    else if(root->data > data)
        return DeleteNode(root->left,data);
    else
    {
        if (root->right == NULL && root->left == NULL)
        {
            delete (root);
            root = NULL;
        }
        else if (root->right == NULL)
        {
            Node *temp = root;
            root = root->left;
            delete (temp);
        }
        else if (root->left == NULL)
        {
            Node *temp = root;
            root = root->right;
            delete (temp);
        }
        else
        {
            Node *temp = FindMin(root->right);
            root->data = temp->data;
            root->right = DeleteNode(root->right, temp->data);
        }
    }
    return root;
}
void Search(Node* root, int key)
{
    if(root == NULL)
        {cout << "Not Found" << endl;
        return;}
    else if(root->data == key)
        {cout << "Found" << endl;
            return;
        }
            else if (root->data > key)
                Search(root->left, key);
            else if (root->data < key)
                Search(root->right, key);
}
int main()
{
    Node *root = NULL;
    cout << "Let's Insert elements to the tree\n";
    root = Insert(root, 15);
    root = Insert(root,14);
    root = Insert(root, 13);
    root = Insert(root, 16);
    root = Insert(root, 17);
    root = Insert(root,18);
    
    root = Insert(root, 19);
    Print(root);
    Search(root, 17);
    DeleteNode(root, 17);
    Search(root, 17);
    return 0;
}