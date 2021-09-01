// C++ implementation to find the maximum
// LCM of pairs in an array

#include <bits/stdc++.h>
using namespace std;
int maxLcmOfPairs(int a,int b,int c, int d)
{
	int maxLCM = -1;
    int arr[4];
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    arr[3] = d;
	for (int i = 0; i < 4; i++) {
		for (int j = i + 1; j < 4; j++) {
			maxLCM = max(maxLCM, (arr[i] * arr[j])/ __gcd(arr[i], arr[j]);
		}
	}
	return maxLCM;
}

// Driver code
int main()
{
    int a=17, b=3, c=8, d=6;
    

	cout << maxLcmOfPairs(a,b,c,d);

	return 0;
}
