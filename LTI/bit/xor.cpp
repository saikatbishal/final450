#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
#define ll long long
#define ve vector<int>
vector<int> makeBinary(int n)
{
    vector<int> v;
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
void Print(vector<int> v)
{
    for (int i = v.size() - 1; i >= 0; i--)
        cout << v[i];
    cout << endl;
}
int main()
{
    
}
void func()
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