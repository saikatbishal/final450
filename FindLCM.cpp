#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}
long long findLCM(int N,int a[])
{
	long long ans = a[0];
	for (int i = 1; i < N; i++)
		ans = (((a[i] * ans)) /(gcd(a[i], ans)));

	return ans;
}
int main()
{
	int arr[] = { 2, 7, 3, 9, 4 };
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("%lld", findlcm(arr, n));
	return 0;
}
