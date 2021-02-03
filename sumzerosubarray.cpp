/*Given an array 'A' find all the subarrays the elements of which add up to '0'*/
#include <iostream>
using namespace std;
int main()
{

    int a[] = {1,2,-3,-1,1};
    int len = sizeof(a) / sizeof(a[0]);
    int ctr = 0;
    int i;
    for (i = 0; i < len; i++)
    {
        int sum = 0;
        int start = i;
        int j;
        for (j = start; j < len;j++)
        {
            sum = sum + a[j];
            if(sum == 0)
            {
                ctr = ctr + 1;
            }
        }
    }
    if(ctr>0)
        cout << "Number of subarray = " << ctr;
    else
        cout << "No such subarray found";
}