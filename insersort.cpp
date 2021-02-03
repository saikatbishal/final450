#include <iostream>
void insersort(int *a, int n)
{
    int i, j, key;
    for (int i = 1; i < n;i++)
    {
        key = a[i];
        j = i - 1;
        while(j>=0 && a[j]>key)
        {
            a[j+1] = a[j];
            j = j - 1;
        }
    a[j + 1] = key;
    }
}
int main()
{
    int a[10] = {9, 7, 5, 3, 1, 0, 8, 6, 4, 2}, l;
    l = sizeof(a) / sizeof(a[0]);
    insersort(a, l);
    for (int i = 0; i < l;i++)
    {
        std::cout << a[i];
    }
    return 0;
}