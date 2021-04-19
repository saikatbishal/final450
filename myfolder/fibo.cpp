#include <iostream>
#include <vector>
#define ll long long
using namespace std;
vector<ll> arr(20, -1);
ll fibo(int n)
{
    if (n <= 1)
        return n;
    if(arr[n]!=-1)
        return arr[n];
    else if (arr[n] == -1)
    {
        arr[n] = fibo(n - 1) + fibo(n - 2);
        return arr[n];
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << fibo(n);
    }

}