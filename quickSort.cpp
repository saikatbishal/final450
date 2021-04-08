#include <iostream>
#include <vector>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(vector<int> &v, int start, int end)
{
    int i = start, j = end, key = v[i];
    while (i < j)
    { 
        do{
            i++;
        } while (v[i] <= key);
        do
        {
            j--;
        } while (v[j]>key);
        if (i < j)
            swap(&v[i], &v[j]);
    }
    swap(&v[j], &v[start]);
    return j;
}
void quickSort(vector<int> &v, int start, int end)
{
    if (start<end)
    {
        int p = partition(v, start, end);
        quickSort(v, start, p);
        quickSort(v, p + 1, end);
    }
}
int main()
{
    vector <int> v={9,1,8,2,7,3,6,4,5,0};
    quickSort(v, 0, v.size());
    for (auto item : v)
        cout << item<<" ";
    return 0;
}
// When we pass a vector to a fuction, a copy of that vector is created, this may take up a lot of time in case of a large vector. To avoid this we can pass a vector by reference. If we do not want the function to modify the vector, we declare it a const.


