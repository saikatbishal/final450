#include <iostream>
using namespace std;
int main()
{
    int a[100];
    int n, ctr = 0, ctr1 = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] %2 == 0)
            ctr++;
        else if (a[i] % 2 != 0)
            ctr1++;
    }
    //cout << ctr1 << " " << ctr;
    if (ctr1 >= ctr)
        cout << "NOT READY\n";
    else
        cout << "READY\n";
    return 0;
}