#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <gsl
using namespace std;
int remDup(vector<int> &v)
{
    int j = 0;
    for (int i = 0; i < v.size()-1; i++)
    {
        if (v[i] != v[i + 1])
            v[j++] = v[i];
    }
    v[j] = v[v.size() - 1];
    return j+1;
}
vector<int> remDup2(vector<int> v)
{
    unordered_map<int, int> umap;
    for (int i = 0; i < v.size(); i++)
    {
        umap[v[i]]++;
    }
    vector<int> ans;
    for (auto c : umap)
        ans.push_back(c.first);
    return ans;
}
int main()
{
    vector<int> v = {1, 7, 3, 2, 7, 5,2, 9, 0};
    vector<int> v1 = v;
    sort(v.begin(), v.end());
    int ans1 = remDup(v);
    for (int i = 0; i < ans1; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    vector<int> ans = remDup2(v1);
    for (auto c : ans)
        cout << c << " ";
    sort(ans.begin(), ans.end());
    

}