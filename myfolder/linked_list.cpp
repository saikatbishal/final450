#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node *head;
void Insert(int x)
{
    Node *temp = new Node();
    temp->data = x;
    temp->next = head;
    head = temp;
}
void Print()
{
    Node *temp = head;
    cout << "The list is :";
    while (temp != NULL)
        {cout << temp->data<<" ";
        temp = temp->next;}
    cout << endl;
}
// void InsertAfter(int x,int n)
// {
//     Node *temp = new Node();
// temp ->data
// }
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
void Reverse_LL()
{
    cout << "Reversed\n";
    Node *next = NULL;
    Node *current = head;
    Node *prev = NULL;
    while(current!=NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}
void Search_mid(Node* head)
{
    cout << "search\n";
    Node *slow = head;
    Node *fast = head;
    if(head!=NULL)
    {
        while(fast->next!=NULL && fast!=NULL)
        {
            //cout << "Loops\n";
            fast = fast->next->next;
            cout << slow->data << " ";
            slow = slow->next;
        }
        int x = slow->data;
        cout << x;
    }
}
int main()
{
    head = NULL;
    cout << "How many numbers\n";
    int n,a,m;
    cin >> n;
    for (int i = 0; i < n;i++)
    {
        cout << "Enter number\n";
        cin >> a;
        Insert(a);
        Print();
    }
    //Reverse_LL();
    //Print();
    Search_mid(head);
    return 0;
}