#include<bits/stdc++.h>
using namespace std;
int countVowels(string s)
{
    int count=0;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = toupper(s[i]);
        if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
            ++count;
    }
    return count;
    
}
int main()
{
    string s="It is a very pleasant morning";
    cout << countVowels(s);
}