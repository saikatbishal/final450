#include <iostream>
#include <queue>
#include <vector>
#include "bubblesort.cpp"
using namespace std;
struct Node
{
	int data;
	Node* left, * right;
};
Node* MakeNewNode(int data)
{
	Node* temp = new Node();
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}
Node* Insert(Node* root, int data)
{
	if (root == 0)
	{
		root = MakeNewNode(data);
		return root;
	}
	else
	{
		if (root->data > data)
			root->left = Insert(root->left, data);
		else if (root->data < data)
			root->right = Insert(root->right, data);
	}
	return root;
}
void InOrder(Node* root)
{
	if (root == NULL)
		return;
	InOrder(root->left);
	cout << root->data<<" ";
	InOrder(root->right);
}
void LevelOrder(Node* root)
{
	if (root == NULL)
		return;
	queue<Node*> q;
	q.push(root);
	while (!q.empty())
	{
		Node* current = q.front();
		cout << current->data << " ";
		if(current->left != NULL)
			q.push(current->left);
		if(current->right != NULL)
			q.push(current->right);
		q.pop();
	}
}
int main()
{
	vector<int> v = { 64,34,25,12,22,11,90 };
	vector<int> v1 = bubbleSort(v);
	Print(v1);
	/*Node* root = NULL;
	int n;
	cout << "Enter the number of elements to insert\n";
	cin >> n;
	vector<int> v;
	cout << "Enter Values to insert\n";
	while (n--)
	{
		int x;
		cin >> x;
		v.push_back(x);
		root = Insert(root, x);
	}
	for (auto s : v)
		cout << s<<" ";
	cout << endl;
	InOrder(root);
	cout << endl;
	LevelOrder(root);*/
}
