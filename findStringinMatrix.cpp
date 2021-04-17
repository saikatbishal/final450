#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <utility>
using namespace std;
#define vc vector<vector<char>>
bool srch(vc v, int i, int j, string str)
{
	cout << str << "\n";
	if (str.size() == 0)
		return true;
	if (v[i][j] = str[0])
		return srch(v, i+1, j, str.substr(1));
}
int main()
{
  string str = "ace";
	vector<pair<int, int>> mp;
	bool found=false;
	vc v = {{'a', 'c', 'e', 'b'},
					{'c', 'a', 'e', 'a'},
					{'e', 'b', 'c', 'b'},
					{'a', 'e', 'c', 'e'}};
//[(1,1),(2,2),(3,3),(4,1),(4,4)]
  for (int i = 0; i < v.size(); i++)
  {
    for (int j = 0; j < v[i].size(); j++)
    {
			cout << v[i][j]<<" ";
			bool found = srch(v,i,j, str);
			cout << "found = " << found << "\n";
			if (found)
        mp.push_back(make_pair(i, j));
    }
  }
	cout << mp.size();
	for (auto items : mp)
    cout << "[" << items.first << "]"
      << "[" << items.second << "]" << endl;
}