#include <iostream>
#define ll long long
#include <cmath>
using namespace std;
// ll findSteps(ll n,int ctr)
// {
//     if (n == 0)
//             return ctr;
//     if (n < 205)
//         {
//             //cout << "case 2\n";
//             return -1;
//         }
//         int dig = floor(log10(n) + 1);
//         ll n1 = floor(2050 * pow(10, dig - 4));
//         ll n2 = floor(2050 * pow(10, dig - 5));
//         if (n < n1)
//             return findSteps(n - n2, ctr + 1);
//         return findSteps(n - n1, ctr + 1);
// }
// int main()
// {
//     ll n;
//     cin >> n;
//     int ctr = 0;
//     //cout << floor(log10(n) + 1);
//     cout <<findSteps(n, ctr);
// 
// }
//n = 2050+205 = 2255
int main()
{
    ll n;
    cin >> n;
    int sum = 0;
    if (n % 205)
        cout << -1;
else{
    n /= 205;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    cout << sum;
}
}