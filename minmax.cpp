#include<bits/stdc++.h>
using namespace std;
struct paired{
    int min;
    int max;
};
paired checkmaxmin(int arr[] , int n)
{
    paired minmax;
    if (n == 1)
    {
        minmax.min = arr[0];
        minmax.max = arr[1];
    }
    else
    {
        minmax.min = arr[0];
        minmax.max = arr[1];
        for (int i = 0; i < n;i++)
        {
            if (arr[i] < minmax.min)
                minmax.min = arr[i];
            else if (arr[i] > minmax.max)
                minmax.max = arr[i];
        }
    }
    return minmax;
}
int main()
{
    int t, n, arr[20];
    cin >> t;
while(t--)
{
    cin >> n;
    for ( int i = 0; i < n;i++)
{
    cin >> arr[i];
}
//cout << "length = " << n<<endl;
struct paired minmax = checkmaxmin(arr,n);
cout << "minimum = " << minmax.min << "\n maximum = " << minmax.max << endl;
}
}