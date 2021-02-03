#include <iostream>
using namespace std;
int main()
{
    int a[20], n;
    cout << "Enter numbers\n";
    cin >> n;
    int c0 = 0, c1 = 0, c2 = 0;
    for (int i = 0; i < n;i++)
    {
        cin >> a[i];
        switch (a[i])
        {
        case 0:
            c0++;
            break;
        case 1:
            c1++;
            break;
        case 2:
            c2++;
            break;
        }
    }
    int i = 0;
    while (c0--)
    {
        a[i++] = 0;
    }

    while(c1--)
    {
        a[i++] = 1;
    }
    while(c2--)
    {
        a[i++] = 2;
    }
    cout << "The sorted array is :\n";
    for (int i = 0; i < n;i++)
    {
        cout << a[i];
    }
}