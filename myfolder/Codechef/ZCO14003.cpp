#include <iostream>
#include <vector>
using namespace std;
#define ll long long
int main()
{
    ll n;
    vector<ll> v;
    cin >> n;
    for (int i = 0; i < n;i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    ll max_rev = 0;
    for (int i = 0; i < n; i++)
    {
        ll sum = 0;
        for (int j = 0; j < n;j++)
        {
            if (v[i] <= v[j])
                sum = sum + v[i];
        }
        //cout << sum << endl;
        if (sum > max_rev)
            max_rev = sum;
    }
    cout << max_rev;
}