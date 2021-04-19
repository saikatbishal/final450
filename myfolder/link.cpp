#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *hash;
};Node *head=NULL;
class Linked_List
{
public:
void Insert(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->hash = head;
    head = temp;
}
void Insert(int data,char c)
{
    Node *temp = new Node;
    Node *temp2 = head;
    temp->data = data;
    temp->hash = NULL;
    while (temp2->hash != NULL)
    {
        temp2 = temp2->hash;
    }
    temp2->hash = temp;
}
void Insert(int data,int pos)
{
    Node *temp = new Node;
    Node *temp2 = head;
    pos = pos - 1;
    while (pos--)
    {
        temp2 = temp2->hash;
    }
    temp->hash = temp2->hash;
    temp2->hash = temp;
}
void chain()
{
    Node *temp = head;
    while (temp->hash != NULL)
    {
        temp = temp->hash;
    }
    temp->hash = head;
}
void Print()
{
    Node *temp = head;
    do
    {
        cout << temp->data;
        temp = temp->hash;
    } while (temp->hash != head);
    cout << endl;
}
};
int main()
{
    int data,t;
    cout << "Enter number of nodes\n";
    cin >> t;
    Linked_List l;
    while (t--)
    {
        cout << "Data and pos!\n";
        cin >> data;
        int n;
        cin >> n;
        l.Insert(data,n);
    }
    //l.chain();
    l.Print();
}
