#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void swap(string &s, int i, int j )
{
    char temp = s[i];
    s[i] = s[j];
    s[j] = temp;
}
void allPermut(string s, int index)
{
    int l = s.length();
    if(index == l)
    {
        cout << s << " ";
    }
    else
    {
        for(int i = index; i<l; i++)
        {
            swap(s, index, i);
            allPermut(s, index+1);
        }
    }
}
int main() {
	int t;
	cin>> t;
	while(t--)
	{
	    string s;
	    cin>> s;
	    sort(s.begin(),s.end());
	    allPermut(s,0);
	}
	cout << endl ;
	
	return 0;
}
