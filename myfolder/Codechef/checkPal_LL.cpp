#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data; Node* next;
};
 Node* head = NULL;
void Insert(int data)
{
    Node* temp = new Node();
    temp->data = data;
    temp->next = head;
    head = temp;
}
struct Node* reverseLL(Node* head)
{
    Node* curr = head;
    Node* next = NULL;
    Node* prev = NULL;
    while(curr!=NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
bool checkPal()
{
    Node* temp = reverseLL(head);
    while(temp!= NULL)
    {
        if(temp->data != head->data)
            return false;
        temp = temp->next;
        head = head->next;
    }
    return true;
}
int main()
{
    Node* head = NULL;
    int n;
    cin >> n;
    while(n--)
    {
        int x;
        cin>>x;
        Insert(x);
    }
    bool ans = checkPal();
    cout << ans;
    return 0;
}