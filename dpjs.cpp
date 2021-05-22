#include <map>
#include <string>
//#include <utility>
#include <iostream>
#define ll long long
using namespace std;

ll fib(ll n, map<ll,ll> &mp)
{
  if(mp.find(n)!=mp.end())
    return mp[n];
  if(n<=2) 
    return 1;
  mp[n]=fib(n-1,mp)+fib(n-2,mp);
    return mp[n];
}
ll gridTravel(int m, int n, map<string, ll> &mp)
{
	string s = to_string(m) + "," + to_string(n);
	string s1 = to_string(n) + "," + to_string(m);
	if (mp.find(s) != mp.end())
		return mp[s];
	if(mp.find(s1)!=mp.end())
		return mp[s1];
	if (m == 1 && n == 1)
		return 1;
	if (m == 0 || n == 0)
		return 0;
	mp[s] = gridTravel(m - 1, n, mp) + gridTravel(m, n - 1, mp);
	return mp[s];
}
int main() {
  int t;
	cout << "Enter the number of test cases\n";
	cin>>t;
  while(t--)
  {
    ll n,m;
		cout << "Enter m and n\n";
		cin >> m >> n;
		map<string,ll> mp;
		cout << gridTravel(m, n, mp) << " ";
	}
  return 0;
}
