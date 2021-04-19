#include <iostream>
#include <vector>
#define n 5
using namespace std;
int main()
{
//kdane's algorithm

//max sum subarray
vector<int> arr(n);
cout << "Input 10 numbers\n";
for (int i = 0; i < n; i++)
{
    cin>> arr[i];
}
int sum1 = 0;
int sum2 = 0;
for (int i = 0; i < n; i++)
{
    sum1 = sum1 + arr[i];

    if (sum1 > sum2)
        sum2 = sum1;
}
if(sum2<0)
    sum2 = 0;
cout << sum2 <<" ";
return 0;
}