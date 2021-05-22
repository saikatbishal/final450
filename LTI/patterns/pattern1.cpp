#include <iostream>
using namespace std;
void pattern3(int m)
{
    m += 1;
    int j = 0;
    while(j < m)
    {
        int k = 0;
        while (k < m-j)
        {
            cout << "  ";
            k++;
        }
        int i = 0;
        while(i<j)
        {
            cout << "*  ";
            i++;
        }
        cout << endl;
        j++;
    }
}
void pattern2(int m)
{
    int j = m;
    while(j > 0)
    {
        int k = 0;
        while (k < m-j)
        {
            cout << "    ";
            k++;
        }
        int i = j;
        while(i>0)
        {
            cout << "* ";
            i--;
        }
        cout << endl;
        j--;
    }
}
void pattern1(int m)
{
    int j = m;
    while(j > 0)
    {
        int k = 0;
        while (k < m-j)
        {
            cout << "  ";
            k++;
        }
        int i = j;
        while(i>0)
        {
            cout << "* ";
            i--;
        }
        cout << endl;
        j--;
    }
}
void pattern4(int m)
{
    for (int j = 1; j <= m; j++)
    {
        for (int k = m; k > j - 1; k--)
        {
            cout << "  ";
        }
        for (int i = 1; i <= j; i++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int j = 1; j <= m;j++)
    {
        for (int k = 0; k <= j; k++)
        {
            cout << "  ";
        }
        for (int i = m - j; i > 0; i--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    pattern4(n);
}