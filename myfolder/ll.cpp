#include <iostream>
#include <vector>
struct Node
{
    int data;
    Node *hash;
};
Node *head;
void Print()
{
    Node *temp = head;
    std::cout << "The list is \t";
    while (temp!=NULL)
    {
        std::cout << temp->data << " ";
        temp = temp->hash;
    }
    std::cout << std::endl;
}
void InsertEnd(int data)
{

    Node *temp = new Node;
    temp->data = data;
    temp->hash = NULL;
    Node *temp2 = head;
    //std::cout << temp2->data;
    if (temp2 == NULL)
    {
        head = temp;
    }

    while (temp2->hash != NULL)
    {
        temp2 = temp2->hash;
        //std::cout << temp2->data<<" ";
    }
    temp2->hash = temp;
    //std::cout << temp->data;
}
void Insert(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->hash = head;
    head = temp;
}
int main()
{
    int t;
    std::cout << "Enter number of entries\n";
    std::cin>>t;
    while(t--)
    {
    int ch,x;
    std::cout << "Enter 1 to insert at start\n Enter 2 to insert at end\n ";
    std::cin>>ch;
    std::cout << "Enter number to Insert\n";
    switch(ch)
    {
    case 1: 
    std::cin>>x;
    Insert(x);
    break;
    case 2:
    std::cin>>x;
    InsertEnd(x);
    break;
    default:
   std:: cout << "Invalid!!";
  }
  Print();
  }
return 0;
}
