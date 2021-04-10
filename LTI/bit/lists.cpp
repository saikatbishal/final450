#include <iostream>
#include <bitset>
#include<string>
#define k 3
#define k1 4
#define bt bitset<8>
using namespace std;
int main(void)
{
    int r = 27;
    cout << "Original number\n";
    cout << bt(r)<<"\n\n";
    cout << "Turning off the " << k1 << "th bit\n";
    int r1 = r & ~(1 << (k1 - 1));
    cout << bt(r1);
    int r2 = r1 | (1 << (k - 1));
    cout << "\n\nTurning on the " << k << "rd bit\n";
    cout << bt(r2);
}