#include <string>
#include<iostream>
using namespace std;
void SayProblem(string s, int x, int n)
{
    string str;
    int j = 0, ctr = 0;
    s = s + 'q';
    while (s[j] != '\0')
    {
        if (j == 0)
        {
            ctr++;
        }
        else if (s[j] == s[j - 1])
        {
            ctr++;
        }
        else
        {
            str.push_back('0' + ctr);
            str.push_back(s[j - 1]);
            ctr = 1;
        }
        j++;
    }
    cout << str << endl;
    if (x < n)
        SayProblem(str, x + 1,n);
}
int main()
{
    SayProblem("1",0, 10);
    return 0;
}