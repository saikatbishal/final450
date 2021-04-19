#include <algorithm>
#include <vector>
#include <iostream>
//#define ll long long
using namespace std;
void swap(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
void NextPermut(vector<int> &arr)
{
    int n = arr.size();
    int i, k, j;
    bool flag = false;
    for (i = n - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1])
        {
            k = i;
            flag = true;
            break;
        }
    }
    if(flag == false)
    {
        sort(arr.begin(), arr.end());
        return;
    }
    for (int j = n - 1; j >= 0; j--)
    {
        if (arr[j] > arr[k])
        {
            swap(&arr[j], &arr[k]);
            break;
        }
    }
    reverse(arr.begin() + k + 1, arr.end());
}
int main()
{
    vector<int> v = {3,2,1};
    NextPermut(v);
    for (auto s : v)
        cout << s << " ";
    cout << endl;
    return 0;
}
/*
1. traversing from the end find a knee point where a[i]<a[i+1];
2. again traverse from last and find the first element (from right) a[j]>a[i];
3. swap(a[j],a[i]);
4. reverse everything which comes after a[i];
*/