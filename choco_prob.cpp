#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int distribute_choc(vector<int> v, int m)
{
    //cout << "ENtered the function\n";
    int i = 0, max = 99999;
    while (i+m < v.size())
    {
        cout << v[i + m] << "-" << v[i] << "=" << v[i + m] - v[i] << endl;
        if(max>v[i+m]-v[i])
            max = v[i + m] - v[i];
        i++;
    }
    return max;
}
int main()
{
    int t,m;
    cout << "Enter number of test cases\n";
    cin >> t;
    while (t--)
    {
        int n,a;
        vector<int> v;
        cout << "Enter the number of packets to be stored\n";
        cin >> n;
        cout << "Enter number of chocolates\n";
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            v.push_back(a);
        }
        sort(v.begin(), v.end());
        cout << "Enter the number of children\n";
        cin >> m;
        int ans = distribute_choc(v,m-1);
        cout << ans;
    }
}