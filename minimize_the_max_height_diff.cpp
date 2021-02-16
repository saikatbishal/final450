#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;
int GetMinDiff(vector<int> a, int k)
{
    vector<pair<int, int>> v;
    vector<int> v1;
    vector<int> v2;
    for (int i = 0; i < a.size();i++)
    {
        if (a[i]>=k)
            v.push_back(make_pair(a[i] - k, i));
        v.push_back(make_pair(a[i] + k, i));
    }
    sort(v.begin(), v.end());
    // for (int i = 0; i < v.size();i++)
    // {
    //     cout <<v[i].first<<" "<<v[i].second<<endl;
    // }

    return 1;
}
int main()
{
    vector<int> v = {1, 5, 8, 10};
    int k = 2;
    int ans = GetMinDiff(v, k);
    return 0;
}