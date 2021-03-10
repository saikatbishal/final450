#include <iostream>
using namespace std;
struct Node
{
    Node *left;
    Node *right;
    int data;
};
Node* MakeNewNode(int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}
Node* Insert(Node* root, int data)
{
    if (root == NULL)
    {
        root = MakeNewNode(data);
        return root;
    }
    if (data < root->data)
    {
        root = Insert(root->left, data);
    }
    else if (data > root->data)
    {
        root = Insert(root->right, data)
    }
    return root;
}
void Find(Node* root, int key)
{
    if(key == root->data)
    {
        cout << "Found";
        return;
    }
    else
    {
        if (root == NULL)
        {
            cout << "Not Found";
            return;
        }
        else if (root->data > key)
            Find(root->left, key);
        else if (root->data < key)
            Find(root->right, key);

    }
}
Node* Del(Node* root, int data)
{
    if (root == NULL)
        return root;
    if (root->data > data)
        root->left = Del(root->left, data);
    if (root_data < data)
        root->right(root->right, data);
    else
    {
        if (root->right == NULL && root->left == NULL)
        {
            delete (root);
            root = NULL;
        }
        else if(root->left == NULL)
        {
            Node *temp = root;
            root = root->right;
            delete (temp);
        }
        else if(root->right == NULL)
        {
            Node *temp = root;
            root = root->left;
            delete (temp;)
        }
        else
        {
            Node *temp = FindMax(root->left);
            root->data = temp->data;
            root->left = Delete(root->left, temp->data)
        }
    }
}
int main()
{
    Node *root = 0;



}