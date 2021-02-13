#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/* Given an array arr of size N and an integer K. Find if there's a triplet in the array which sums up to the given integer K. */
void triplet_sum(int k, int *a,int n)
{
    sort(a.begin(), a.end());
    int left, right, c;
    for (int c = 0; c < n - 2; c++)
    {
        left = c + 1;
        right = n - 1;
        int flag = 0;
        int sum = -a[c];
        while (left < right)
        {
            if (a[left] + a[right]== k+sum)
            {
                cout << a[c] << " " << a[left] << " " << a[right] << endl;
                break;
            }
            else if (a[left] + [right] < k+sum)
            {
                left++;
            }
            else if (a[left]+a[right]>k+sum)
            {
                right--;
            }
        }
        if (flag == 1)
        {
            cout << a[left] << " " << a[right] << " " << a[c] << "\n";
        }
        else
            continue;
    }
}
int main()
{
    int a[] = {1, 12, 3, 9, 5, 6, 7};
    int n = sizeof(a) / sizeof(a[0]);
    int k = 15;
    triplet_sum(k, a, n);

}