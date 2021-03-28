#include <iostream>
using namespace std;
#include <map>
/*Implemented by hash tables*/

/*
1. count characters
2. take the most frequently occuring characters
3. jumble them in a good way
[USE HASH_MAPS]
[USE MAX_HEAP]
*/
void func()
{
    string s;
    cin >> s;
    map<int, char, greater<int>> u1; 
    map<char,int,greater<int>> u;
    for (int i = 0; i < s.length();i++)
    {
        u[s[i]]++;
    }
    for (auto x : u)
    {
        u1.insert(make_pair(x.second, x.first));
    }
    for (auto x : u1)
    {
        cout << x.first << " " << x.second << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        func();
    }
    return 0;
}
/*
Given a string s, check if the letters can be rearranged so that two
characters that are adjascent to each other are not the same.

If possible, output result. If not, return empty string
*/