#include <bits/stdc++.h>
using namespace std;
bool ispar(string x)
{
    // Your code here
    stack <char> s;
    char c;
    for(int i = 0;i<x.length();i++)
    {
        if(x[i] == '('|| x[i] == '{' || x[i] == '[')
        {
            s.push(x[i]);
            continue;
        }
        if(s.empty())
        {
            return false;
        }
        switch(x[i])
        {
            case ')':
                c = s.top();
                s.pop();
                if( c == '{' || c == '[')
                    return false;
                break;
            case '}':
                c = s.top();
                s.pop();
                if(c == '(' || c == '[')
                    return false;
                break;
            case ']':
                c = s.top();
                s.pop();
                if(c == '(' || c == '{')
                    return false;
                break;
        }       
    }
    return (s.empty());
}
int main()
{
    string s;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> s;
        bool ans = ispar(s);
        if (ans)
            cout << "YES";
        else
            cout << "NO";
    }
    return 0;
}