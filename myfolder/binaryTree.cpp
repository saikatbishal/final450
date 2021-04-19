#include<iostream>
using namespace std;
struct Node
{
    Node *left;
    Node *right;
    int data;
};
Node* GetNewNode(int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right = 0;
    return newNode;

}
Node* Insert(Node* root, int data)
{
    if(root == NULL)
    {
        root = GetNewNode(data);
    }
    else if (data <= root->data)
    {
        root->left = Insert(root->left, data);
    }
    else
    {
        root->right = Insert(root->right, data);
    }
    return root;
}
void search(Node* root, int key)
{
    if (root->data == key)
    {
        cout << "Found";
        return;
    }
    else if (root->data > key)
        search(root->right, key);
    else if (root->data < key)
        search(root->left, key);
    cout << "Not Found\n";
    return;
}
int FindHeight(Node* root)
{
    if (root == 0)
        return -1;
    else
    {
        int left = FindHeight(root->left);
        int right = FindHeight(root->right);
        int height = (left > right) ? left+1 : right+1;
        return height;
    }
}
struct Node* FindMin(Node* root)
{
    if (root->left == 0)
        return root;
    else
        return FindMin(root->left);
}
struct Node* DeleteNode(Node* root,int key)
{
    if(root == 0)
        return root;
    else if (key < root->data)
        root->left = DeleteNode(root->left, key);
    else if (key > root->data)
        root->right = DeleteNode(root->right, key);
    else
    {
        if (root->left == 0 && root->right == 0)
        {
            //case 1 : the node to be deleted is the leaf node;
            delete root;
            root = 0;
        }
        else if (root->left == 0)
        {
            //case 2.1 : the node to be deleted has only right child;
            Node *temp = root;
            root = root->right;
            delete temp;
        }
        else if (root->right == 0)
        {
            //case 2.2 : the node to be deleted has only left child;
            Node *temp = root;
            root = root->left;
            delete temp;
        }
        else
        {
            //case 3 : the node to be deleted has both left and right child;
            Node *temp = FindMin(root->right);
            root->data = temp->data;
            root->right = DeleteNode(root->right, temp->data);
        }
    }
    return root;
}

int main()
{
    Node *root = NULL;
    root = Insert(root, 15);
    root = Insert(root, 10);
    root = Insert(root, 20);
    root = Insert(root, 12);
    root = Insert(root, 18);
    search(root, 20);
    return 0;
}