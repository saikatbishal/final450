#include <iostream>
#include <string>
using namespace std;
void find_substring(string s, string s1)
{

}
int main()
{
    string s = "saikat bishal";
    string s1 = "kat";
    int f = s.find("x");
    if (f == -1)
        cout <<"Not found\n";
    else
        cout << "Found at position\t" << f;

    return 0;
}