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
void InsertAfter(int data,int n)
{
    Node *temp = new Node();
    temp->data = data;
    Node *temp2 = head;
    for (int i = 0; i < n - 1;i++)
        while (temp2 != NULL)
            temp2 = temp2->next;
}
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
        //int x = slow->data;
        printf("%d\n", slow->data);
    }
}
void Delete_Node(int n)
{
    Node *temp = head;
    if (n == 1)
    {
        head = temp->next;
        delete temp;
    }
else
    {
        for (int i = 0; i < n - 1; i++)
            temp = temp->next;
        if (temp == NULL)
            return;
        Node *temp2 = temp->next;
        temp->next = temp->next->next;
        delete temp2;
    }
}
Delete_Node_key(int data)
{
    Node *temp = head;
    Node *prev = nullptr;
    if (temp != NULL && temp->data == data)
    {
        head = temp->next;
        delete temp;
    }
    else
    {
        while (temp != NULL && temp->data != key)
        {
            prev = temp;
            temp = temp->next;
        }
        if (temp == NULL)
            return;
        prev->next = temp->net;
        delete temp;
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