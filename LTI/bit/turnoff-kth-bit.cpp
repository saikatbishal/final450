#include <iostream>
#include <bitset>
#include <vector>
using namespace std;
int switchKth(int n, int k);
int main()
{
    int n;
    cout << "Enter number\n";
    cin >> n;
    cout << bitset<8>(n)<<"\n";
    int k;
    cout << "Enter bit position to toggle\n";
    cin >> k;
    cout << switchKth(n, k)<<"\t";
    cout << bitset<8>(switchKth(n, k));
    // int ans = n & (~(1 << (k - 1)));
    // cout << "\n" << ans;
    // cout << "\t" << bitset<4>(ans);
    return 0;
}
int switchKth(int n, int k)
{
    int ans = n & (~(1 << (k - 1)));
    if (ans != n)
        return ans;
    else
        return n | (1 << (k - 1));
}