//given an Array and a number 'k', find al the pairs in the array which add up to 'k

#include <iostream>
using namespace std;
void findsum(int *a,int n, int k)
{
    for (int i = 0; i < n - 1;i++)
    {
        if(a[i]>k)
            break;
        else
            for (int j = i + 1; j < n;j++)
                if(a[i]+a[j]==k)
                    cout << a[i] << "+" << a[j] << endl;
    }
}
int main()
{
    int a[] = {1, 2, 3, 8, 5, 6};
    int k;
    cin >> k;
    int len = sizeof(a) / sizeof(a[0]);
    findsum(a, len, k);
}