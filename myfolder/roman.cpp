#include <iostream>
#include <string>
using namespace std;
int num(char c)
{
    switch (c)
    {
        case 'I':
            return 1 ;
            
        case 'V':
            return 5;
            
        case 'X':
            return 10;
            
        case 'L':
            return 50;
            
        case 'C':
            return 100;
            
        case 'D':
            return 500;
            
        case 'M':
            return 1000;
            
        default:
            return -1;
            
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int l = str.length();
        string s = str;
        int t = 0;
        long long sum = 0;
        while (!str.empty())
        {
            char ch = str[str.length() - 1];
            int c = num(ch);
            str.pop_back();
            if (c >= t)
            {
                sum = sum + c;
                t = c;
            }
            else if (c < t)
            {
                sum = sum - c;
            }
        }
        cout << sum << endl;
    }
}