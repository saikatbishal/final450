#include <iostream>
using namespace std;
int main()
{
    int max_diff = 0, diff = 0;
    int a[] = {3, 5, 2, 6,8 , 19, 4};
    int n = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < n-1;i=i+1)
    {
        for (int j = i + 1; j < n;j++)
        {
            if(a[j]>a[i])
                diff = a[j] - a[i];
            if (max_diff <diff)
                max_diff = diff;
        }
    }
    cout << max_diff;
}