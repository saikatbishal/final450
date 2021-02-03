#include <iostream>
using namespace std;
int minimumjump(int a[], int n)
{
    int i = 0, ctr = 0;
    while (i<n)
    {
        i = i + a[i];
        ctr++;
    }
    return ctr;
}
int main()
{
    int a[20], t, n; 
    cin >> t;
    while(t--)
    {
        cin >> n;
        for (int i = 0; i < n;i++)
            cin >> a[i];
        int min = minimumjump(a, n);
        cout << min;
    }
    return 0;
}