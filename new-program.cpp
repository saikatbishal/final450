#include <iostream>
#include <vector>
using namespace std;
int dir =0;

int main()
{

    int a[4][4] = {{16, 15, 14, 13}, {12,11,10,9}, {8, 7, 6,5}, {4, 3, 2, 1}}, m = 4, n = 4;
    vector<vector<int>> v;
    int top = 0, down = n - 1, left = 0, right = m - 1, dir = 0;
    while (down >= top && right >= left)
    {
        if (dir == 0)
        {
            for (int i = left; i <= right;i++)
            {
                cout << a[top][i]<<" ";
            }
            top++;
            cout << "\n";
        }
        else if (dir == 1)
        {
            for (int i = top; i <= down; i++)
            {
                cout << a[i][right]<<" ";
            }
            right--;
            cout << "\n";
        }
        else if (dir == 2)
        {
            for (int i = right; i >= left; i--)
            {
                cout << a[down][i]<<" ";

            }
            down--;
        }
        else if (dir == 3)
        {
            for (int i = down; i >= top; i--)
            {
                cout << a[i][left]<<" ";
            }
            left++;
        }
        dir = (dir + 1) % 4;
    }
}