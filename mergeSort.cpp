#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int> &v, int low, int mid, int high)
{
    int n1 = mid - low + 1;
    int n2 = high - mid;
    vector<int> left(n1), right(n2);
    for (int i = 0; i < n1;i++)
    {
        left[i] = v[low + i];
    }
    for (int i = 0; i < n2; i++)
    {
        right[i] = v[mid + i + 1];
    }
    int k = low, j = 0, i = 0;
    while (i < n1 && j < n2)
    {
        if (left[i] < right[j])
            v[k++] = left[i++];
        else if (left[i] > right[j])
            v[k++] = right[j++];
    }
    while (j < n2)
        v[k++] = right[j++];
    while (i < n1)
        v[k++] = left[i++];
}

void mergeSort(vector<int> &v, int low, int high)
{
    if (low >= high)
        return;
    int mid = (low + high) / 2;
    mergeSort(v, low, mid);
    mergeSort(v, mid + 1, high);
    merge(v, low, mid, high);

}
int main()
{
    vector<int> v = {9, 1, 8, 2, 7, 3, 6, 4, 5, 0};
    mergeSort(v, 0, v.size() - 1);
    for (auto item : v)
        cout << item<<" ";
    return 0;
}