//question : how many characters need to be added to the front in order to make it a pallindrome

// we just need to discard the last characters from the string and check if it is a pallindrome
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool Pal(string s)
{
    string str = s;
    reverse(s.begin(), s.end());
    return s.compare(str);
}
int cutFromEnd(string s,int count)
{
if(Pal(s.substr(0,s.length()-count))==0)
    return count;
else
    return cutFromEnd(s, count + 1);
}

int main()
{
    string s;
    cin >> s;
    int count = 0;
    int to_be_added = cutFromEnd(s,count);
    cout << to_be_added;
}