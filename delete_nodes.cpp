#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *head;
void Print(Node* head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout << temp->data<<" ";
        temp = temp->next;
    }
}
Node* Insert(Node* head, int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;
    Node *temp2 = head;
    while (temp2->next)
    {
        temp2 = temp2->next;
    }
    temp2->next = temp;
    return head;
}
int main()
{
    Node *head;
    head->data = 12;
    head->next = NULL;
    head = Insert(head, 5);
    head = Insert(head, 12);
    head = Insert(head, 7);
    head = Insert(head, 6);
    head = Insert(head, 8);
    head = Insert(head, 2);
    head = Insert(head, 1);
    head = Insert(head, 5);
    Print(head);

}