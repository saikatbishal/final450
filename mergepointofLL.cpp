#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
Node* newNode(int data)
{
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}
// void Reverse(Node *head)
// {
//     Node *current = head;
//     Node *prev = NULL;
//     Node *next = NULL;
//     while(current != NULL)
//     {
//         next = current->next;
//         current->next = prev;
//         prev = current;
//         current = next;
//     }
//     head = prev;
// }
void Insert(int data, Node *head)
{
    Node *temp = newNode(data);

}
/*int Length(Node **head)
{
    int ctr = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        ctr++;
    }
    return ctr;
}*/
Node* Add_LL(Node *head1, Node *head2)
{
    // Reverse(&head1);
    // Reverse(&head2);
    Node *temp1 = head1;
    Node *temp2 = head2, *prev = NULL;
    int carry = 0,sum;
    Node *res = NULL;
    while (temp2 != NULL || temp1 != NULL)
    {
        sum = carry + (temp1 ? temp1->data : 0) + (temp2 ? temp2->data : 0);
        carry = (sum >= 10) ? 1 : 0;
        sum = sum % 10;
        temp = newNode(sum);
        if (res == NULL)
            res = temp;
        else
        {
            temp->next = prev;
        }
        prev = temp;
        if (temp1)
            temp1 = temp1->next;
        if (temp2)
            temp2 = temp2->next;
    }
    if (carry > 0)
        temp->next = newNode(carry);
    return res;
}
Print(Node *head)
{
    Node *temp = head;
    while(temp != nullptr)
    {
        cout << temp->data;
        temp = temp->next;
    }
}
int main()
{
    Node *head1 = NULL;
    Node *head2 = NULL;
    int data;
    cout << "Enter data to the 1st linked list\n and enter -1 to terminate\n\n";
    while(1)
    {
        cin >> data;
        if (data != -1)
            Insert(data, &head1);
        else
            break;
    }
    cout << "Enter data to the 2nd linked list\n and enter -1 to terminate\n\n";
    while (1)
    {
        cin >> data;
        if (data != -1)
            Insert(data, &head2);
        else
            break;
    }
    Print(&head1);
    Print(&head2);
    Add_LL(&head1, &head2);
    return 0;
}