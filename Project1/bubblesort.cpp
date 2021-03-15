#include <iostream>
#include <vector>
using namespace std;
void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
vector<int> bubbleSort(vector<int> v)
{
	for (auto i = 0; i < v.size()-1; i++)
	{
		for (auto j = 0; j < v.size() - i - 1; j++)
		{
			if (v[j] > v[j+1])
				swap(&v[j+1], &v[j]);
		}
	}
	return v;
}
void Print(vector<int> v)
{
	for (auto s : v)
		cout << s << " ";
	cout << endl;
}
int main()
{
	vector<int> v = { 64,34,25,12,22,11,90 };
	vector<int> v1 = bubbleSort(v);
	Print(v1);
}