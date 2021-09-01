#include <bits/stdc++.h>
using namespace std;
int nthPrimeNumber(int N)
{
   int c = 0, num = 2, i, l = 0;
  

  while (c != N)
    {
      int count = 0;

      for (i = 2; i <= sqrt (num); i++)
    {
   if (num % i == 0)
     {
       count++;
       break;
     }
 }
      if (count == 0)
 {
   c++;
   l = num;
 }
      num = num + 1;
    }
    reurn l;
}
int main()
{
    int n = 11;
    nthPrimeNumber(n);
}