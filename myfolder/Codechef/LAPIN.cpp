#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int l = s.length();
    vector<int> v(26,0);
    for (int i = 0; i < l/2;i++)
    {
        v[(int)s[i] - 97]++;
    }
    for (int i = l / 2; i < l;i++)
    {
        v[(int)s[i] - 97]--;
    }
    // for (int i = 0; i < 26;i++){
    //     cout << arr[i] << " ";
    sort(v.begin(),v.end(),greater<>());
    if (v[0] != 0)
        cout << "NO\n";
    else
        cout << "YES\n";
}