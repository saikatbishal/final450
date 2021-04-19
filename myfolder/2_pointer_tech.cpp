#include <iostream>
#include <vector>
using namespace std;
void two_pointers_tech(vector<int> a, int k)
{
    int n = a.size(),flag = 0;
    int start = 0, end = n - 1;
    while (start <=end)
    {
        if(a[start]+a[end]>k)
            end--;
        else if (a[start] + a[end] < k)
            start++;
        else if (a[start] + a[end] == k)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
        cout << a[start] << "+" << a[end] << "=" << k;
    else
        cout << "Not found";

}
int main()
{
    vector<int> v = {1, 2, 3, 5, 7, 8, 12, 14};
    int k = 13;
    two_pointers_tech(v, k);


}