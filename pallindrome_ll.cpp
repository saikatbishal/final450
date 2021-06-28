#include <bits/stdc++.h>
using namespace std;

struct Node{
    Node *next;
    int data;
};
Node *head;
Node* Insert(Node* head,int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->next = head;
    head = temp;
    return head;
}
Node* InsertEnd(Node* head, int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;
    if(head == NULL)
        return temp;
    Node *temp2 = head;
    while (temp2->next != NULL)
    {
        temp2 = temp2->next;
    }
    temp2->next = temp;
    return head;
}
void printMid(Node* head)
{
    Node *slow=head, *fast=head;
    while (fast != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    cout << slow->data<<" ";
}
void Print(Node* head1)
{
    Node *temp = head1;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}
int main()
{
    head = NULL;
    cout << "Enter the length of Linked List\n";
    int t;
    cin >> t;
    Node *head1=NULL;
    while (t--)
    {
        int data;
        cin >> data;
        head = Insert(head, data);
        head1 = InsertEnd(head1, data);
    }
    Print(head);
    printMid(head1);
}