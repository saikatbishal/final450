#include <iostream>
#include <string>
using namespace std;
string str;
string func(string s)
{
    if (s.empty())
        return str;
    if (s[0] != s[1])
        str.push_back(s[0]);
    return func(s.substr(1));
}
int main()
{
    string s = "aaabbccddddaa";
    //cout << s.substr(1);
    string str = func(s);
    cout << str;
    return 0;
}