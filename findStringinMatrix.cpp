#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <utility>
using namespace std;
#define vc vector<char>
bool srch(const vi &v,int i, int j, string s)
{
	if (s.empty())
		return true;
	while (i <= 3 && j <= 3 && i>=0 && j>=0)
	{
		if (v[i][j] == s[0])
		{
			srch(v, i + 1, j + 1, s.substr(1));
			srch(v, i, j + 1, s.substr(1));
			srch(v, i + 1, j, s.substr(1));
			srch(v, i - 1, j - 1, s.substr(1));
			srch(v, i, j - 1, s.substr(1));
			srch(v, i - 1, j, s.substr(1));
			srch(v, i - 1, j + 1, s.substr(1));
			srch(v, i + 1, j - 1, s.substr(1));
		}
		else
			return false;
	}
	return false;
}
int main()
{
  string str = "abe";
  map<int, int> mp;
  vc v = {{'a', 'b', 'c', 'e'},
          {'c', 'a', 'e', 'a'},
          {'e', 'c', 'c', 'b'},
          {'a', 'e', 'c', 'e'}};
//[(1,1),(2,2),(3,3),(4,1),(4,4)]
  for (int i = 0; i < v.size(); i ++)
  {
    for (int j = 0; j < v[i].size(); j++)
    {
      if (v[i][j] == 'a')
        bool found = srch(v,i,j, str);
      if (found)
        mp.insert(make_pair(i, j));
    }
  }
  for (auto items : mp)
    cout << "[" << items.first << "]"
      << "[" << items.second << "]" << endl;
}