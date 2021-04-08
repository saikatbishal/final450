#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void print_vec(vector<int> &v)
{
    for (auto s: v)
        cout << s << " ";
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
vector<int> next_permutation(vector<int> &a)
{
    // cout << "entered the function";
    int n = a.size(), i, j;
    for (i = n - 2; i >= 0; i--)
        if (a[i]>a[i+1])
            break;
    if (i==0)
        reverse(a.begin(), a.end());
    else
    {
        for (j = n - 1; j >i; j--)
        {
            if(a[i]<a[j])
                break;
        }
        swap(&a[i], &a[j]);
        reverse(a.begin() + i + 1, a.end());
    }
    return a;
}
int main()
{
    vector<int> v = {1, 2,3};
    v = next_permutation(v);
    for (int i = 0; i < v.size();i++)
        cout << v[i] << " ";
}

/* the problem is to find the next lexicographical permutation of the given sequence of characters.
(like it may exist in a dictionary)

step 1 : first search for the knee point (from the back ofc). (knee point is the point in the array after which the array elements start to decrease their value)

step 2 : now traverse the array from back till the knee point to get the element which is just greater than the knee element



*/