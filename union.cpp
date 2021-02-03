#include <iostream>
using namespace std;
int Unionof(int a[],int b[],int m,int n){
    int c[m + n]={0};
    cout << m + n;
    for (int i = 0; i < m + n;)
    {
        // cout << "Floop1 ";
        while(i<n)
        {
            // cout << "Wloop1 ";
            c[i] = a[i];
            i++;
        }
        while(i>=n&&i<m+n)
        {
            // cout << "Wloop2 ";
            c[i] = b[i - n];
            i++;
        }
    }
    // for (int i = 0; i < m + n;i++)
    // {
    //      cout << "Floop2 ";
    // }
    cout << "ENd ";
    return 0;
}
int main()
{
    int a[] = {1, 2, 3, 1, 2, 4};
    int b[] = {3, 4, 6, 5, 6};
    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(b[0]);
    int un = Unionof(a, b, m, n);
    cout << "un";

}