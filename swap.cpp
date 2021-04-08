#include <iostream>
using namespace std;
int main()
{
	int a = 15;
	int b = 13;
	a = a+b;
	b = a-b;
	a = a-b;
	cout << "a = "<<a<<"\nb = "<<b;
	return 0;
}