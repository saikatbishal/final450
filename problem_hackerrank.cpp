#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int main()
{
    int n,x;
    vector<int> v1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v1.push_back(x);
    }
    sort(v1.begin(), v1.end());
    int i = 0;
    priority_queue<int> v2;
    while (i < n)
    {
        vector<int>::iterator it1 = lower_bound(v1.begin(), v1.end(), v1[i]);
        vector<int>::iterator it2 = upper_bound(v1.begin(), v1.end(), v1[i]);
        int ctr = it2 - it1;
        v2.push(it2 - it1);
        i += ctr;
    }
    priority_queue<int> q = v2;
    int t = n, ctr = 0;
    while(t>n/2)
    {
        t = t - q.top();
        q.pop();
        ctr++;
    }
    cout << ctr;
    return 0;
}