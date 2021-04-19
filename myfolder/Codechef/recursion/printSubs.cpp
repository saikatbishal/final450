#include <iostream>
#include <string>
using namespace std;
void printSubs(string input, string output)
{
    if (input.empty())
    {
        cout << output << endl;
        return;
    }
    printSubs(input.substr(1), output);
    printSubs(input.substr(1), output + input[0]);
    
}
int main()
{
    string s;
    cin >> s;
    cout << s.substr(1);
    //printSubs(s,"");
    return 0;
}
