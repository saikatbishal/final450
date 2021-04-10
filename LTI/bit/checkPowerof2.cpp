#include <iostream>
using namespace std;
#include <bitset>
int main()
{
    int n;
    cout << "Enter number\n";
    cin >> n;
    cout << bitset<8>(n)<<"\n";
    cout << n - (n & (n - 1));

}
void checkPowerof2()
{
    cout << "Enter number\n";
    int n;
    cin >> n;
    if(n&(n-1))
        cout << "No\n";
    else
        cout << "Yes\n";
}