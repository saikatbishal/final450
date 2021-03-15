#include <iostream>
#include <queue>
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
Node* Insert(int data, Node* root)
{
    if(root == NULL)
    {
        Node* root = MakeNewNode(data);
        return root;
    }
    else
    {
        if(root->data > data)
            root->left = Insert(data, root->left);
        else if (root->data <data)
            root->right = Insert(data, root->right);
    }
    return root;
}
Node *FindMin(Node *root)
{
    if(root->left == NULL)
        return root;
    while(root->left !=NULL)
        root = root->left;
    return root;
}
Node *Delete(Node* root, int data)
{
    if(root == NULL)
        return root;
    if (root->data > data)
        root->left = Delete(root->left, data);
    else if (root->data < data)
        root->right = Delete(root->right, data);
    else
    {
        if(root->left == 0 && root->right == 0)
        {
            delete (root);
            root = NULL;
            return root;
        }
        else if(root->left == NULL)
        {
            Node *temp = root;
            root = root->right;
            delete (temp);
        }
        else if (root->right == NULL)
        {
            Node *temp = root;
            root = root->left;
            delete (temp);
        }
        else
        {
            Node *temp = FindMin(root->right);
            root->data = temp->data;
            Delete(root->right, temp->data);
        }
    }
    return root;
}
void LevelOrder(Node* root)
{
    if (root == NULL)
        return;
    queue<Node *> q;
    q.push(root);
    while(!q.empty())
    {
        Node *temp = q.front();
        cout << temp->data<<" ";
        if(temp->left !=NULL)
            q.push(temp->left);
        if (temp->right != NULL)
            q.push(temp->right);
        q.pop();
    }
}
void PreOrder(Node* root)
{
    if(root==NULL)
        return;
    cout << root->data << " ";
    PreOrder(root->left);
    PreOrder(root->right);
}
void InOrder(Node* root)
{
    if (root == NULL)
        return;
    InOrder(root->left);
    cout << root->data << " ";
    InOrder(root->right);
}
int FindHeight(Node* root)
{
    if (root == NULL)
        return -1;
    int left = FindHeight(root->left);
    int right = FindHeight(root->right);
    int height = (left > right ? left : right) + 1;
    return height;
}
int main()
{
    Node *root = NULL;
    root = Insert(15, root);
    root = Insert(10, root);
    root = Insert(20, root);
    root = Insert(23, root);
    root = Insert(17, root);
    root = Insert(7, root);
    root = Insert(12, root);
    root = Insert(21, root);
    root = Insert(5, root);
    root = Insert(25, root);
    root = Insert(18, root); 
    root = Insert(16, root);
    root = Insert(9, root);
    root = Insert(11, root);
    root = Insert(13, root);
    cout << endl << "Levelorder = ";
    LevelOrder(root);
    cout << endl << "Preorder = ";
    PreOrder(root);
    cout << endl << "Inorder = ";
    InOrder(root);
    return 0;
}