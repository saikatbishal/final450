#include <iostream>
using namespace std;
int dir =0;

int main()
{
    int a[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}}, m = 4, n = 4;
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
        }
        else if (dir == 1)
        {
            for (int i = top; i <= down; i++)
            {
                cout << a[i][right]<<" ";
            }
            right--;
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