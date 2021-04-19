#include <iostream>
using namespace std;
#define ll long long
int main()
{
	ll a[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	ll k,i;
	cin >> k;
	for (i = 9; i >= 0; i--)
	{
		if (k >= a[i])
		{
			k = k - a[i];
			a[i] = 0;
		}
	else
		break;
	}
	cout << i+1;
}