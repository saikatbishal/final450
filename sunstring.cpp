#include <iostream>
using namespace std;
class solution {
public :

	int func(string s, string s1, int m, int n)
	{
		if (m == 0 || n == 0)
			return 0;
		if (s[m - 1] == s1[n - 1])
			return 1 + func(s, s1, m - 1, n - 1);
		else
			return max(func(s, s1, m, n - 1), func(s, s1, m - 1, n));
	}

	int max(int a, int b){
		return (a > b) ? a : b;
	}
};
int main()
{
  cout << "Enter two strings\n";
  string s, s1;
	int ans;
	cin >> s >> s1;
	solution sol;
	if(s1.length()>s.length())
    ans = sol.func(s1, s,s1.length(),s.length());
  else
    ans = sol.func(s, s1,s.length(),s1.length());
  cout << ans << "\n";
  return 0;
}