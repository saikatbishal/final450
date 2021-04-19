#include <iostream>
using namespace std;
#define ll long long
int main()
{
    ll n,sum = 0;
    //n(n+1)/2;
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        ll x;
        cin >> x;
        sum += x;
    }
    ll sum2 = (n * (n + 1)) / 2;
    cout << sum2 - sum;
}