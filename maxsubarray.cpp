#include <iostream>
using namespace std;
int maximum(int a, int b)
{
if(a>b)
    return a;
else
    return b;
}
int maxsubarray(int a[], int n)
{
    int max1=0, max2=INT32_MIN;
    for (int i = 0; i < n;i++)
    {
        max1 = maximum(a[i], max1 + a[i]);
        if(max2<max1)
            max2 = max1;
    }
        return max2;
}
int main()
{
    int a[20];
    int n;
    cin >> n;
    for (int i = 0; i < n;i++)
        cin>>a[i];
    int ans = maxsubarray(a, n);
    cout << ans;
    return 0;
}