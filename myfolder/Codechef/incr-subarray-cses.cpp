#include <iostream>
using namespace std;
#define ll long long
int main()
{
    ll n,x,prev=0,sum = 0;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        cin >> x;
        if (i > 0)
        {
            if (prev > x)
            {
                sum = sum + prev - x;
            }
        }
        prev = max(prev, x);
    }
    cout << sum;
}