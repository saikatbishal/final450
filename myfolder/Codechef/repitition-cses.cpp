#include <iostream>
using namespace std;
#define ll long long
#include <string>
int main()
{
    string s;
    cin >> s;
    ll ctr = 1, sum = 1;
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == s[i - 1])
        {
            ctr++;
        }
        else 
        {
            ctr = 1;
        }
        sum = max(sum, ctr);
    }
    cout << sum;
    return 0;
}
// int main()
// {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
// freopen("output.txt","w",)
// 
// }