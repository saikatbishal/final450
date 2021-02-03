
//given an array(length 'n') and a number 'k, find all the elemnts that appear n/k times
#include <iostream>
#include <climits>
using namespace std;
void check_redundant(int *a, int n, int k)
{
    for (int i = 0; i < n-1;i++)
    {
        int ctr = 0,flag=0;
        for (int j = i + 1; j < n;j++)
        {
            if(a[i]==a[j] && a[j]!=-1)
            {
                ctr++;
                a[j] = -1;
            }
            if (ctr > k)
            {
                flag = 1;
                //break;
            }
        }
        if(flag==1)
            cout << a[i]<<" ";
    }
}
int main()
{
    int a[] = {1, 2, 5, 3, 7, 1, 2, 3, 2, 8,8,8,8,1, 3, 1, 2};
    int k = 7;
    int l = sizeof(a) / sizeof(a[0]);
    //cout << INT_MIN;
    check_redundant(a, l, l/k);
}