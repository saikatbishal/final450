#include <iostream>
using namespace std;
int pal(int a)
{
    int sum = 0, digit = 0, num = a;
    while(num)
    {
        digit = num % 10;
        sum = 10 * sum + digit;
        num = num / 10;
    }
    if (sum == a)
        return 1;
    else
        return 0;
}
int checkpal(int *a, int n)
{
    int flag = 1;
    for (int i = 0; i < n;i++)
    {
        if(pal(a[i])==0)
        {
            flag = 0;
            break;
        }
        else
            continue;
    }
    return flag;
}

int main()
{
    int n, a[100];
    cout << "Enter the length of array";
    cin >> n;
    for (int i = 0; i < n;i++)
    {

        cin >> a[i];
    }
    int ans = checkpal(a, n);
    cout << ans;
}