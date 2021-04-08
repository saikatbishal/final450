#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {1, 1, 2, 2, 3, 3, 3, 6, 7};
    int i = 0, j = 0;
    int arr[10];
    for (i; i < v.size()-1; i++)
    {
        if(v[i]==v[i+1])
            continue;
        else
        {
            v[j] = v[i];
            j++;
        }
    }
    v[j] = v[v.size() - 1];
    for (int k = 0; k <= j; k++)
    {
        cout << v[k] << " ";
    }
    //cout << v[j+1];
}
//{1,2,3,3,4,4,4,5,6}
// j 0 1 2 