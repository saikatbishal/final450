#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *head;
void Insert(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;
    if (head == NULL)
    {
        temp->next = head;
        head = temp;
        return;
    }
    Node *temp2 = head;
    while (temp2->next != NULL)
        temp2 = temp2->next;
    temp2->next = temp;
}
void Print()
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout << temp->data<<" ";
        temp = temp->next;
    }
    cout << endl;
}
void Reverse()
{
    Node *current = head, *next = NULL, *prev = NULL;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}
void Add_One()
{
    Node *temp = head;
    while (temp!=NULL)
    {
        if(temp->data == 9)
        {
            temp->data = 0;
            temp = temp->next;
        }
        else
        {
            temp->data = temp->data + 1;
            break;
        }
    }
}
int main()
{
    cout << "Enter number of test cases\n";
    int t,x;
    cin >> t;
    while (t--)
    {
        head = NULL;
        cout << "Enter number of digits";
        int n;
        cin >> n;
        cout << "Now enter digits one by one";
        for (int i = 0; i < n;i++)
        {
            cin >> x;
            if (x >= 0 && x < 10)
                Insert(x);
            else 
            {
                cout << "Enter again\n";
                i--;
            }
        }
        cout << "The original number is : ";
        Print();
        Reverse();
        //Print();
        Add_One();
        //Print();
        Reverse();
        cout << "The number after adding one is ";
        Print();
    }
        return 0;
}