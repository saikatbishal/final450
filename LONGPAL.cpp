#include <bits/stdc++.h>
using namespace std;
bool is_pallindrome(string str)
{
    string s = str;
    reverse(str.begin(), str.end());
    if (s.compare(str) == 0)
        return true;
else
    return false;
}
int main()
{
    string s;
    int n;
    cin >> n;
    cin >> s;
    string str = "";
    int mac_len = 0;

    for (int i = 0; i < s.length();i++)
    {
        for (int j = 1; j < s.length() - i + 1; j++)
        {
            if (is_pallindrome(s.substr(i,j)) && j>mac_len)
            {
                mac_len = j;
                str = s.substr(i, j);
            } 
        }
    }
    cout << mac_len << endl << str;
    return 0;
}