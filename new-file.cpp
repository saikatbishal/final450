
#include <iostream>
#include <vector>
#define fo(i,n) for(i = 0; i < n;i++)
#define N 500
using namespace std;
int main()
{
    //factorial of a large number
    int num;
    cout << "Enter number";
    cin >> num;
    int a[N] = {0};
    a[N - 1] = num;
    for (int i = N - 1; i >= 0; i--)
    {
        //multiply(a, num - 1);
    }
        return 0;
}
void MaxSumSubarray()
{
    //Largest sum contiguous subarray
    //1 2 3 - 4 - 5 4 9 1
    int sum1 = 0;
    int sum2 = 0;
    int arr[100];
    int i;
    int n;
    cin >> n;
    fo(i, n)
        cin >> arr[i];
    fo(i,n)
    {
        sum1 = sum1 + arr[i];
        if (sum1 > sum2)
            sum2 = sum1;
        if (sum1 < 0)
            sum1 = 0;
    }
    cout << sum2;
}