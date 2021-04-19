#include <iostream>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
if(n==1)
    cout << 1;
else if(n==3 || n==2)
    cout << "NO SOLUTION";
else
    {
        for (int i = 2; i <= n; i += 2)
            cout << i << " ";
        for (int i = 1; i <= n; i += 2)
            cout << i << " ";
    }
    return 0;
}