#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
void check_redundant(string s);
int main()
{
    string s = "A quick brown fox jumps over the lazy dog";
    s.size();
    //cout << (int)s[1]<<s[1];
    check_redundant(s);
}
void check_redundant(string s)
{
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    vector<int>v(26, 0);
    for (auto a:s)
    {
        if(a!=' ')
        {
            v[(int)a-97]++;
        }
    }
    for (int i = 0; i < 26;i++)
    {
        if (v[i] > 1)
        {
            cout << char(i + 97) <<" "<<v[i]<<endl;
        }
    else
        cout << char(i + 97) << "-" << v[i] << endl;
    }
}