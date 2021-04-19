#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
//given a string, convert it to a pallindromic string (if possible)
    string s;
    cin >> s;
    int ctr = 0;
    vector<int> intarray(26,0);
    vector<char> v(s.length());
    for (int i = 0; i < s.length();i++)
    {
        intarray[(int)s[i] - 91]++;
    }
    for (int i = 0; i < intarray.size(); i++)
    {
        if (ctr == 2)
        {
            cout << "Pallindrome can't be formed";
            break;
        }
        if (intarray[i] == 0)
        {
            continue;
        }
        else if (intarray[i] % 2 == 1)
        {
            v[v.size() / 2] == intarray[i];
            ctr++;
        }
        else if (intarray[i] % 2 == 0)
        {
            while (intarray[i] = intarray[i] - 2)
            {
                int j;
                v[j] = char(i + 91);
                v[v.size() - j - 1] = char(i + 91);
            }
        }
    }
}