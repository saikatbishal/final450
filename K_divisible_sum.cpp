#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
int k_div_sum(int n,int k)
{
    vector<int> v(n, 0);
    int x = k;
    while (n > k)
        x = x + k;
while (x!=0)
{
    for (int i = 0; i < n;i++)
    {
        if (x!=0)
        {
            v[i]++;
            x--;
        }
        else
            break;
    }
}
sort(v.begin(), v.end(), greater<>());
return v[0];
}
int main()
{
   int ans = k_div_sum(4, 9);
   cout << ans;
}