#include <iostream>
using namespace std;
struct node
{
    int data;
    node *prev;
    node *next;
};
node *head;
void Insert(int data)
{
    node *temp = new node;
    temp->data = data;
    temp->next = head;
    temp->prev = NULL;
    if (head != NULL)
    {
        head->prev = temp;
    }
    head = temp;
}
void Insert(int data, int pos)
{
    node *temp = new node;
    temp->data = data;
    node *temp2 = head;
    for (int i = 0; i < n - 1;i++)
    {
        temp2 = temp2->next;
    }
    temp->next = temp2->next;
    temp->prev = temp2;
    temp2->next = temp;
    temp->next->prev = temp;

}
int main()
{
    head = NULL;
    cout << "How many numbers\n";
    int n, a;
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
    return 0;

}
