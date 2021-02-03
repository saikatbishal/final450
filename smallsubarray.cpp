/*Given an array A and a number 'k' find the smallest subarray whose sum of contents exceed the number 'k' */

#include <iostream>
using namespace std;
int sb(int *a, int n, int x)
{
    
    for (int i = 0; i < n;i++)
    {
        int sum = 0;
        for (int j = i; j < n;j++)
        {
            sum = sum + a[j];
            if (sum > x)
            {
                len = j - i;
                break;
            }
        }
    }
    return len;
}
int main()
{
    A[] = {1, 4, 45, 6, 0, 19};
    int x = 51;
    int n = sizeof(A) / sizeof(A[0]);
    int ans = sb(A, n, x);
    cout << ans;
}