#include <iostream>
#include <unordered_map>
//clone a linked list with next and random pointer
//This uses O(N) space for the hashmap implementation.
//Easy to visualize and implement
using namespace std;
class Node
{
    public:
        int data;
        Node *next, *random;
        Node(int data)
        {
            this->data = data;
            this->next = this->random = NULL;
        }
};

class LinkedList
{
public:
    Node *head;
    LinkedList(Node * head)//constructor
    {
        this->head = head;
    }
    void push(int data)
    {
        Node *node = new Node(data);
        node->next = head;
        head = node;
    }
    void print()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            Node *random = temp->random;
            int randomData = (random != NULL) ? random->data : -1;
            std::cout << "Data = " << temp->data <<", Random data = "<< randomData << std::endl;
            temp = temp->next;
        }
        std::cout << std::endl;
    }
    LinkedList *clone()
    {
        Node *origCurr = head;
        Node *cloneCurr = NULL; //initializing the new list
        std::unordered_map<Node *, Node *> nodeToNode;
        while (origCurr != NULL)
        {
            cloneCurr = new Node(origCurr->data);
            //cloning the data;
            nodeToNode[origCurr] = cloneCurr;
            //storing the original and the cloned data into the hash;
            origCurr = origCurr->next;
            //traversing;
        }

        origCurr = head;

        while (origCurr != nullptr)
        {
            cloneCurr = nodeToNode[origCurr];                 
            //mapping the current to current;
            cloneCurr->next = nodeToNode[origCurr->next];     
            //mapping the next to next;
            cloneCurr->random = nodeToNode[origCurr->random]; 
            //mapping the random to random;
            origCurr = origCurr->next;                        
            //traversing the original list;
        }
        return new LinkedList(nodeToNode[head]);
}
};
int main()
{
    LinkedList *mylist = new LinkedList(new Node(5));
    mylist->push(4); 
    mylist->push(3); 
    mylist->push(2); 
    mylist->push(1); 
    mylist->head->random = mylist->head->next->next; 

    mylist->head->next->random = 
        mylist->head->next->next->next; 

    mylist->head->next->next->random = 
        mylist->head->next->next->next->next; 

    mylist->head->next->next->next->random = 
        mylist->head->next->next->next->next->next; 

    mylist->head->next->next->next->next->random = 
        mylist->head->next;

    LinkedList *clone = mylist->clone();

    cout << "Original Linked List\n";
    mylist->print();
    cout << "\nCloned list\n";
    clone->print();
    return 0;
}

