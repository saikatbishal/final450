#include <iostream>
#include <cstdlib>
#include <vector>
#include <cmath>
#include <time.h>
#include <bitset>
using namespace std;
#define ll long long
#define ve vector<int>
ve makeBinary(int n)
{
    ve v;
    int digit = 0;
    abs(n);
    while (n > 0)
    {

        digit = n % 2;
        v.push_back(digit);
        n /= 2;
    }
    return v;
}
void Print(ve v)
{
    for (int i = v.size() - 1; i >= 0; i--)
        cout << v[i];
    cout << endl;
}

void checkEven()
{
    //check if a number is even or odd
    srand(time(0));
    int rNum = 50 + rand() % 101;
    cout << rNum << " is ";
    if (rNum & 1)
        cout << "Odd\n";
    else
        cout << "Even\n";
}
void checkMissing()
{
//find the missing number
    int a=0, b=0;
    vector<int> v = {1, 2, 8, 6, 4, 3, 9, 7};
    for (int i = 0; i <v.size();i++)
    {
        a = a ^ i+1;
        b = b ^ v[i];
    }
    a = a ^ v.size() + 1;
    int ans = a ^ b;
    cout << "missing number = " << ans;
}
void checkSigns()
{
    int a = 8;
    int b = 5;
    int c = -4;
    cout << bitset<8>(a) << " ";//change decimal to binary with bitset
    cout << bitset<8>(b) << " ";
    cout << bitset<8>(c) << " ";
    if ((a ^ b) < 0)
        cout << "Different signs\n";
    else
        cout << "Same signs\n";
    if ((a ^ c) < 0)
        cout << "Different signs\n";
    else
        cout << "Same signs\n";
}
void checkNeg()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    if ((n ^ 1) < 0)
/*
    positive ^ positive = positive;
    positive ^ negative = negative;
    negative ^ negative = positive;
*/
        cout << "Negative\n";
    else
        cout << "Positive\n";
}
int main()
{
    int t;
    cout << "Enter test cases : ";
    cin >> t;
    while (t--)
        checkNeg();
}