
#include <bits/stdc++.h> 
using namespace std;
int fountainActivation(vector<int> a)
{
    int N = a.size();
    int dp[N];
    for(int i=0;i<N;i++)
    {
        dp[i]=-1;
    }

    int left;
    int right;
    for (int i = 0; i < N; i++) {
        left = max(i - a[i], 0);
        right = min(i + (a[i] + 1), N);
        dp[left] = max(dp[left],right);
    }
    int count = 1;
    right = dp[0];
    int next=-1;
    for (int i = 0; i < N; i++)
    {
        next = max(next,dp[i]);
        if (i == right)
        {
            count++;
            right = next;
        }
    }
    return count;
}
int main()
{
    vector<int> a = { 1, 1, 1, 1 };
    cout << fountainActivation(a);
}