#include <iostream>
using namespace std;
#include <vector>
void INSERT(vector<int> &v, int n)
{
    if (v.size() == 0 || v[v.size() - 1] <= n)
    {
        v.push_back(n);
        return;
    }
    int val = v[v.size() - 1];
    v.pop_back();

    INSERT(v, n);
    v.push_back(val);
}
void SORT(vector<int> &v)
{
    if (v.size() == 1)
        return;
    int temp = v[v.size() - 1];
    v.pop_back();
    SORT(v);
    INSERT(v, temp);
}
int main()
{
    vector<int> v = {7, 3, 6, 1, 8, 0, 2, 9, 4};
    SORT(v);
    for (auto s : v)
        cout << s << " ";
    return 0;
}

//SORT {if the size of array is 1 -> return;
//save the last element of the array into a  separate variable and pop it
// now call the SORT function with this smaller array;
// Insert the last element into the sorted array}

/* INSERT{




}*/
