#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int key;
    vector<vector<int>> a = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    cout << "Enter number to search\n";
    cin >> key;
    int m = a[0].size();
    int n = a.size();
    //cout << a.size() << "\t" << a[0].size();
    int j,i;
    for (j = m - 1; j > 0; j--)
    {
        if (a[n / 2][j] < key)
        {
            for (i = 0; i< n / 2; i++)
            {
                if (a[i][j + 1] == key)
                {
                    {
                        cout << "FOund at pos :" << i+1 << "," << j + 1;
                    }
                }
            }
            for (i > n / 2; i < n; i++)
            {
                if (a[i][j] == key)
                {
                    cout << "FOund at pos :" << i+1 << "," << j + 1;
                }
            }
        }
        else if (a[n / 2][j] == key)
        {
            cout << "FOund at pos :" << i+1 << "," << j + 1;
        }
    }
}