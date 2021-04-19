#include <iostream>
using namespace std;
#define MAX 100001
#define ll long long
vector<int>* sieve()
{
    bool isPrime[MAX];

    //initialize the array with true;
    for (int i = 0; i < MAX; i++)
    {
        isPrime[i] = true;
    }
    for (int i = 2; i * i < MAX; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j < MAX;j++)
            {
                isPrime[i] = false;
            }
        }
    }
    vector<int> *primes = new vector<int>(); //new vector array;
    primes->push_back(2); //because we know that 2 is a prime number;
    for (int i = 3; i < MAX; i += 2) // only odd numbers may be prime after 2;
    {
        if(isPrime[i]){
            primes->push_back(i);
        }
    }
    return primes;
}
void printPrimes(ll l, ll r, vector<int> *&primes)
{

}
int main()
{
    vector<int> *primes = sieve();
    int t;
    cin >> t;
    while (t--)
    {
        ll l, r;
        cin >> l >> r;
        printPrimes(l, r, primes);
    }
        return 0;
}