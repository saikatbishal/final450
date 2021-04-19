#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cout << "Enter no. of test cases";
    cin >> t;
    while (t--)
    {
        string s;
        int flag = 1;
        cin>>s;
        for (int i = 0; i < s.size()/2+s.size()%2;i++)
        {
            if(s[i]==s[s.size()-1-i])
                continue;
            else
            {
                flag = 0;
                break;
            }
        }
        cout << flag<<endl;
    }
    cin.get();
    return 0;
}