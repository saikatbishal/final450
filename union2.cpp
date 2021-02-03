#include <iostream>
#include <utility>
using namespace std;
int unity(int a[],int b[], int n, int m)
{
    int c[m + n], x = 0;
    for (int i = 0; i < m + n;)
    {
    while (i<n)
    {
        c[i] = a[i];
        i++;
    }
    while (i >= n && i<m+n)
    {
        c[i] = b[i-n];
        i++;
    }
    }

for (int i = 0; i < m + n - 1; i++)
{
    for (int j = i + 1; j < m + n; j++)
    {
        if (c[i] == c[j] && c[i] != -1)
            c[j] = -1;
    }
}
for (int i = 0; i < m + n;i++)
{
    cout << c[i] <<endl;
    if (c[i] != -1)
        x++;
}
    return x;
}
int main()
{
    int a[] = {7,6,5,8,1,2};
    int b[] = {1,2,3,4,1,0,2,3,0,1};
    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(b[0]);
    cout << unity(a, b, n, m);
}