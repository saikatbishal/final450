#include <iostream>
#include <string>
using namespace std;
int check_rotation(string s1,string s2)
{
    if(s1.length()!=s2.length())
        return false;
    else
    {
        string temp = s1 + s1;
        return (temp.find(s2) != string::npos);
    }
}
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int ans = check_rotation(s1, s2);
    cout << ans;
}