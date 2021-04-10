#include <iostream>
#include <bitset>
#include <cstdlib>
using namespace std;
int main()
{
    //check if a number has k th bit 0 or 1;
    int n;
    cout << "Enter a number\n";
    cin >> n;
    cout << "Enter k\n";
    int k;
    cin >> k;
    if(n & (1<<(k-1)))
        cout << k << "th bit is " << 1;
    else
        cout << k << "th bit is " << 0;
    cout << endl << bitset<8>(n);
    return 0;
}