#include <iostream>
#define ll long long
using namespace std;
ll factr(int a)
{
    ll product = 1;
    for (int i = 1; i <= a;i++)
    {
        product *= i;
    }
    return product;
}
ll comination(int a, int b)
{
    return factr(a) / (factr(b) * factr(a - b));

}
int Number(int input1,int input2, int input3)
{
    int n = input3 - input2+1;
    int sum = 0;
    for (int i = 1; i <= input1;i++)
    {
        sum = sum + comination(n, i);
    }
    if(input1 == 1)
        return sum;
else
    return sum + input1;
}
int main()
{
    cout << Number(2, 8, 9);

    return 0;
}