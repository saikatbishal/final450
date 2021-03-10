#include <bits/stdc++.h>
using namespace std;
int expandFromMiddle(string s, int left, int right)
{
    if(s.length()==0 || left > right)
        return 0;
    while (left >= 0 && right < s.length() && s[left] == s[right])
    {
        left--;
        right++;
    }
    return right - left - 1;
}
string longestPallindrome(string s)
{
    if (s.length() < 1)
        return "";
    int start = 0;
    int end = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int len1 = expandFromMiddle(s, i, i + 1);
        int len2 = expandFromMiddle(s, i, i);
        int len = max(len1, len2);
        if (len > end - start)
        {
            start = i - (len - 1) / 2;
            end = i + (len / 2);
        }
    }
    return s.substr(start, end + 1);
}
int main()
{
    string s;
    int n;
    cin >> n;
    cin >> s;
    string str = longestPallindrome(s);
    cout << str.length() << endl << str;
    return 0;
}

