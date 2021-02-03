
#include <iostream>
using namespace std;
#define MAX 500
int multiply(int x, int a[], int a_size) 
{
    int carry = 0;
    for (int i = 0; i < a_size; i++)
    {
        int product = a[i] * x + carry;
        a[i] = product % 10;
        carry = product / 10;
    }
    while (carry)
    {
        a[a_size] = carry % 10;
        carry = carry / 10;
        a_size++;
    }
    return a_size;
}
void factorial(int n)
{
    int a[MAX];
    a[0] = 1;
    int a_size = 1;
    
    for (int i = 2; i <= n;i++)
    {
        int a_size = multiply(i, a, a_size);
    }
    cout << "The factorial is " << endl;
    for (int x = n-1; x >=0; x--)
    {
        cout << a[x];
    }
}
int main()
{
    factorial(100);
    return 0;
}