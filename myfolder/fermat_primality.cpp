#include <iostream>
using namespace std;
int power(int a, unsigned int n, int p)
{
    int res = 1;
    a = a % p;
    if (a == 0)
        return 0;
    while (n > 0)
    {
        if (n & 1)//if n is odd
        {
            res = (res * a) % p;
            //multiply a once to make n= n-1 (i.e n now becomes even)
        }
        n = n >> 1; //  n=n/2;
        a = (a*a) % p;
    }
return res;
}
int gcd(int a, int b)
{
if(a<b)
    return gcd(b, a);
else if(a%b == 0)
    return b;
else
    return gcd(b, a % b);
}
bool isPrime(unsigned int n, int k)
{
if(n<=1||n==4)
    return false;
if(n<=3)
    return true;
while(k>0)
{
    int a = 2 + rand() % (n - 4); // picking a random number from 2 to n-2;
    if (gcd(n, a) != 1)
        return false;
    //fermat's little theorem;
    if (power(a, n - 1, n) != 1)
        return false;
    k--;
}
return true;
}
int main()
{
    int k = 3; //number of times the check is done;
    isPrime(11, k) ? cout << "True\n" : cout << "False\n";
    isPrime(15, k) ? cout << "True\n" : cout << "False\n";

    return 0;
}
