#include <iostream>
using namespace std;
int gcd(int a,int b)
{
    if (a == 0 || a == b)
        return a;
    if (b == 0)
        return b;
    if (a > b)
        return gcd(a - b, b);
    return gcd(a, b - a);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        if (k > 100)
        {    
            cout << "Not possible\n";
            continue;
        }
        int x = gcd(k, 100 - k);
        if ((100 / k) * k == 100)
        {
            cout << 100 / k << "\n";
            continue;
        }
        else
            cout << k / x + (100 - k) / x << "\n";
    }
}