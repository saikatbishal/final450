#include <iostream>
#include <string>
using namespace std;
void PrintSubstring(string input, string output)
{
    if (input.empty())
    {
        cout << output<<" ";
        return;
    }
    PrintSubstring(input.substr(1), output+input[0]);
    PrintSubstring(input.substr(1), output);
}  
int main()
{
    string s = "abc";
    PrintSubstring(s, "");
    return 0;
}