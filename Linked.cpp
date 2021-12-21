#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
//wotking today - 21-12-21
Node *head;
void Make_Tail_Head();
void Print();
void InsertAfter(int, int);
void InsertAtEnd(int);
void Delete_Node(int);
void Delete_Node_key(int);
void Search_Mid(Node *head);
void Reverse_LL();
void Insert(int x)
{
    Node *temp = new Node();
    temp->data = x;
    temp->next = head;
    head = temp;
}
void Make_Tail_Head()
{
    if(head == NULL)
        return;
    Node *temp = head;
    while(temp->next->next!=NULL)
        temp = temp->next;
    if(temp==head && temp->next == NULL)
        return;
    if (temp == head && temp->next != NULL)
        Reverse_LL();
    else
    {
        Node *last = temp->next;
        last->next = head;
        head = last;
        temp->next = NULL;
    }
}
void Make_Loop(int pos)
{
    Node *temp = head;
    Node *temp2 = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
        int pos1 = pos - 1;
        while (pos1--)
        {
            temp2 = temp2->next;
        }
    temp->next = temp2;
}
void Detect_Loop()
{

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
    //cout << "Reversed\n";
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
    //cout << "delete\n";
    Node *temp = head;
    if (n == 1)
    {
        head = temp->next;
        delete temp;
    }
else
    {
        for (int i = 0; i < n - 2; i++)
            temp = temp->next;
        if (temp == NULL)
            return;
        Node *temp2 = temp->next;
        temp->next = temp->next->next;
        delete temp2;
    }
    return;
}
void Delete_Node_key(int data)
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
        while (temp != NULL && temp->data != data)
        {
            prev = temp;
            temp = temp->next;
        }
        if (temp == NULL)
            return;
        prev->next = temp->next;
        delete temp;
    }
}
void Remove_Duplicates()
{

    cout << "Removing Duplicates\n";
    Node *Temp = head;
    Node *Next;
    //bool ctr = false;
    while (Temp->next != NULL)
    {
        if (Temp->data == Temp->next->data)
        {
            //ctr = true;
            Next = Temp->next->next;
            free(Temp->next);
            Temp->next = Next;
        }
        else
        {
            //the pointer moves only when there is no duplicates ahead;
            Temp= Temp->next;
        }
    }
}
void RemoveDuplicates()
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
        InsertAtEnd(a);
        //Print();
    }
    // Reverse_LL();
    Print();
    //Make_Loop(3);
    // Make_Tail_Head();
    // Print();
    RemoveDuplicates();
    Print();
    return 0;
}