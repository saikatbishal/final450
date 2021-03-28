#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    string s1;
    cin >> s;
    s1 = s + s;
    //cout << s1.substr(1, s.length());
    int forward = s.compare(s1.substr(1, s.length()));
    int backward = s.compare(s1.substr(s.length() - 1, s.length()));
    if(forward == backward)
        cout << 1;
    else
        cout << 0;

}
/*
saikat
saikatsaikat
aikats
tsaika
*/