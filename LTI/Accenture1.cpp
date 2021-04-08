#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int turnoff(int n, int k )
{
    if(k<=0)
        return n;
    return (n & ~(1 << (k - 1)));
}

int main()
{

}