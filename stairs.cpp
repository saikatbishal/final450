#include <iostream>
#include <map>
using namespace std;
int climbStairs(int n)
{
    if(n==1)
        return 1;
    int f = 1, s = 2;
    for (int i = 3; i <= n; i++)
    {
        int t = f + s;
        f = s;
        s = t;
    }
    return s;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cout << climbStairs(n)<<"\n";
    }
}