#include <iostream>
using namespace std;
void max_product(int *a, int n)
{
    int p = 1, temp = 1;

    for (int i = 0; i < n; i++)
    {
        if (a[i]!=0)
        {
            p = p * a[i];
        }
        if((a[i]==0 ||i==(n-1)))
        {
            if(temp<p)
            {
                temp = p;
                p = 1;
            }
            else if(temp>=p)
                p = 1;
        }
    }
    cout << temp;
}
int main()
{
    int a[] = {1, 2, 3, 0, 4, 1, 7,0,45};
    int l = sizeof(a) / sizeof(a[0]);
    max_product(a, l);
    return 0;
}