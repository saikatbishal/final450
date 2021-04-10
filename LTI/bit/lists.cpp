#include <iostream>
#include <bitset>
#include<string>
using namespace std;
int main(void)
{
    int x = 128+64+32+16+8+4+2+1;
    cout << bitset<8>(x);
    cout << "\n Enter k \n";
    int k,k1;
    cin >> k;
    x = x & (~(1 << (k - 1)));
    cout << x << " " << bitset<8>(x) << "\n";
    cout << "Again enter k\n";
    cin >> k1;
    int xx = x | (1 << (k - 1));
    cout << x<< " " << bitset<8>(x) << "\n";
    x = x ^ (1 << (k - 1));
    cout << bitset<8>(x);
}