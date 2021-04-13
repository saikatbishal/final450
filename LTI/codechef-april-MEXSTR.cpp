#include <queue>
#include <string>
#include <iostream>
#define ll long long
using namespace std;
bool isSubSequence(string t, string s)
{
	//cout << "s = " << s << "\nt = " << t << "\n";
	if(s == t)
    return true;
  int n = s.size();
  int m = t.size();
  int j = 0;
  for(int i = 0; i < n; i++)
	{
    if(t[j] == s[i])
    	j++;
    if(j == t.size())
    	return true;
  }
  return false;
}
string generateBinary(string str)
{
    //cout << "Entered generateBinary\n";
    queue<string> qu;
    qu.push("1");
    
    while (true)
    {
      string s1 = qu.front();
			//cout << s1 << "\n";
			qu.pop();
      if (isSubSequence(s1, str) == 0)
      {
        return s1;
      }
      string s2 = s1;
      qu.push(s1.append("0"));
      qu.push(s2.append("1"));
  }
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	  string str;
	  cin>>str;
	  int flag = 0;
	  for(int i=0;i<str.size();i++)
	  {
	    if(str[i]=='0')
	      flag = 1;
	  }
	  if(flag == 0)
	    cout <<"0"<<endl;
	  else
	    cout <<generateBinary(str)<<endl;
	}
	return 0;
}