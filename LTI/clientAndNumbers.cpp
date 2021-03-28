#include <iostream>
#define ll long long
bool isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
ll largePrime(int n)
{
    //std::cout << "Log largePrime n =" << n << std::endl;
    if (n > 2)
    {
        for (ll i = n - 1; i > 1; i--)
        {
            if (isPrime(i) && (n % i == 0))
                return i;
        }
        return n - 1;
    }
    
}
ll findSteps(ll n, ll steps)
{
    std::cout << n << std::endl;
    if (n == 0)
        return steps;
    else if (n == 1)
        return steps + 1;
    else
    {
        if (isPrime(n))
            return findSteps(n - 1, steps + 1);
        else
            return findSteps(largePrime(n), steps + 1);
    }
}
int main()
{
    ll n;
    std::cin >> n;
    ll steps = findSteps(n, 0);
    std::cout<<steps;

}