#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
void showvect(vector<int> V)
{
for(auto &it:V)
    cout << it << ' ';
}
int main()
{
    int t;
    vector<int> V = {4,3,2,1};
    cout << "Enter number of test cases\n";
    cin >> t;
    while(t--)
    {
        cout << " Enter number of queries\n";
        int q;
        cin >> q;
        cout << " ENter query to perform operation. Only characters from 'a to f'\n";
        while(q--)
        {
            char s;
            cin >> s;
            switch (s)
            {
            case 'a':
                cout << "Push back a number ..\n Enter number .. ";
                int x;
                cin >> x;
                V.push_back(x);
                showvect(V);
                break;
            case 'b':
                sort(V.begin(), V.end());
                showvect(V);
                break;
            case 'c':
                reverse(V.begin(), V.end());
                showvect(V);
                break;
            case 'd':
                cout << V.end()- V.begin();
                break;
            case 'e':
                showvect(V);
                break;
            case 'f':
                sort(V.begin(), V.end(), greater<int>());
                showvect(V);
                break;
            default:
                break;
            }
        }
    }
}