#include <iostream>
using namespace std;
#include <string>
class Solution{
	public:
	int conCat(int a, int b)
	{
		string A = to_string(a);
		string B = to_string(b);
		int C = stoi(A + B);
		return C;
	}
	string PrintPall(string s, int start, int end)
	{
		while (start != s.length())
		{
for(int j=)
		}
	}
	string Rev(string s)
	{
		for (int i = 0; i < s.length() / 2; i++)
			swap(s[i], s[s.length() - i - 1]);
		return s;
	}
};
int main()
{
    string s = "aasaipiatta";
		string s1 = "saik";
		Solution sol;
		if(s1.compare(sol.Rev(s1))==0)
			cout << "Yes\n";
		else
			cout << "No\n";

}