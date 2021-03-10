#include <bits/stdc++.h>
using namespace std;
struct Node
{
    Node *next;
    int data;
};
void InsertAtEnd(int x)
{
    Node *temp = new Node();
    temp->data = x;
    temp->next = NULL;
    if (head == NULL)
    {
        temp->next = head;
        head = temp;
        return;
    }
    Node *temp2 = head;
    while(temp2->next!=NULL)
    temp2 = temp2->next;
    temp2->next = temp;
}
struct Node* RemoveDuplicates(Node *head)
{
    unordered_set<int> seen;
    Node *curr = head;
    Node *prev = NULL;
    while (curr != NULL)
    {
        if (seen.find(curr->data) != seen.end())
        {
            prev->next = curr->next;
            delete (curr);
        }
        else
        {
            seen.insert(curr->data);
            prev = curr;
        }
        curr = prev->next;
    }
    return head;
}
Print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data<<" ";
        temp = temp->next;
    }
}
int main()
{
    head = NULL;
    cout << "How many numbers\n";
    int n,a,m;
    cin >> n;
    cout << "Enter numbers\n";
    for (int i = 0; i < n;i++)
    {   
        cin >> a;
        Insert(a);
    }
    Print();
    RemoveDuplicates(head);
    Print();
    return 0;
}