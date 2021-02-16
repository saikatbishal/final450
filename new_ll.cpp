#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
Node* head;
void Print()
{
    Node* temp = head;
    while(temp!=NULL)
    {
        cout << temp->data<<" ";
        temp = temp->next;
    }
    cout <<"\n";
}
void Reverse()
{
     Node* prev = NULL;
     Node* next = NULL;
     Node* current = head;
     while(current!=NULL)
     {
         
     }
}
void Insert(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->next = head;
    head = temp;
}
void Insert_End(int data)
{
    Node *temp = new Node;
    Node *temp2 = head;
    temp->data = data;
    temp->next=NULL;
    while(temp2->next!=NULL)
        temp2=temp2->next;
    temp2->next = temp;
}
void Insert_Pos(int data, int pos)
{
    Node* temp = new Node;
    Node* temp2= head;
    temp->data = data;
    for(int i=0;i<pos-1;i++)
    {
        temp2 = temp2->next;
    }
    temp->next=temp2->next;
    temp2->next=temp;
}
void Delete(int data)
{
    Node* temp = head;
    if(temp->data == data && temp!=NULL)
    {
        head = temp->next;
        delete temp;
    }
    else
    {
        Node* prev = NULL;
        prev->next = temp;
        while(temp->data != data && temp->next != NULL)
        {
          prev = temp;
          temp = temp->next;
        }
        if(temp== NULL)return;
        prev->next = temp->next;
        delete temp;
    }
    
}
int main()
{
    head = NULL;
    cout << "Now enter the number of input streams..";
    int t;
    cin>>t;
    cout <<"Enter 1 to Insert node at the beginning\n";
    cout <<"Enter 2 to Insert node at the End\n";
    cout <<"Enter 3 to delete node\n";
    cout <<"Enter 4 to Insert a node at a specific position\n";
    
    while(t--)
    {
        int ch,n;
        cin>>ch;
        switch(ch)
        {
            case 1:
            cout << "Enter number to insert at beginning.. ";
            cin >> n;
            Insert(n);
            Print();
            break;
            case 2:
            cout << "Enter number to Insert at end.. ";
            cin>>n;
            Insert_End(n);
            Print();
            break;
            case 3:
            cout << "Enter number to delete its first instance.. ";
            cin>>n;
            Delete(n);
            Print();
            break;
            case 4:
            cout << "Enter number and postition to insert it.. ";
            int pos;
            cin>>n>>pos;
            Insert_Pos(n,pos);
            Print();
            break;
            default : cout << "Invalid Input!!";
        }
    }
}