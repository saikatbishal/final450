#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *hash;
};
int main()
{
    Node *list[5];
    cout << "Enter the number of entries\n";
    int n;
    cin >> n;
    cout << "Enter numbers\n";
    while (n--)
    {
        int x;
        cin >> x;
        if (list[x % 5]->data == NULL)
            list[x % 5]->data = x;
        else
        { 
            while (list[x % 5]->hash != NULL)
            {
                /* code */
            }
        }
    }
        return 0;
}