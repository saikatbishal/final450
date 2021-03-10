#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <cmath>
#define ll long long
using namespace std;
bool cmp(pair<string, int>& a, pair<string, int>& b) 
{ 
    return a.second < b.second; 
}
void sort(map<string, int>& M) 
{ 
    vector<pair<string, int> > A; 
    for (auto& it : M) { 
        A.push_back(it); 
    } 
    sort(A.begin(), A.end(), cmp); 
} 
ll createNum(string s)
{
    ll value = 0;
    for (int i = 0; i < s.length(); i++)
    {
        value += ((int)s[i] - 91);
    }
    return value;
}
int main()
{
    vector<string> v = {"act", "dog", "cat", "god", "tac"};
    cout << createNum("cat") << " " << createNum("act");
    map<string,ll> m;
    for (auto s : v)
    {
        m.insert(make_pair(s, createNum(s)));
    }
    sort(m);
    for(auto& it : m)
    {
if(it.second)
    }
    return 0;
}