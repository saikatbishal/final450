#include <iostream>
#include <map>
#include <vector>
#include <utility>
#include <algorithm>
#include <string>
#define ll long long
using namespace std;
struct comp {
    template <typename T>
    bool operator()(const T& l,
                    const T& r) const
    {
        if (l.second != r.second) {
            return l.second < r.second;
        }
        return l.first < r.first;
    }
};
vector<pair<string, int>> sort(map<string,int> &mp)
{
  vector<pair<string,int>> v;
  for(auto &it : mp)
  {
    v.push_back(make_pair(it.second,it.first));
  }
  sort(v.begin(),v.end(),comp);
  return v;
}
int main() {
	int n,m;
	cin>>n>>m;
	vector<pair<string,string>> v;
	for(int i=0;i<n;i++)
	{
		string s1,s2;
		cin>>s1>>s2;
		v.push_back(make_pair(s1,s2));
	}
	map<string,int> mp;
	for(int i=0;i<m;i++)
	{
		string s;
		cin >> s;
		if(mp.find(s)==mp.end())
			mp[s]=1;
		else mp[s]++;
	}
	vector<pair<string,int>> v2 = sort(mp);
	cout << v2[0].first << ", " << v2[0].second;

	return 0;
}
