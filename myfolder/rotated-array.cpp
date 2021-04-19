#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int binsrch(vector<int> v, int start, int end,int key)
{
    while(start<end)
    {
        int mid = start + end / 2;
        if(v[mid]==key)
            return mid;
        else if (v[mid] < key)
            return binsrch(v, start, mid - 1, key);
        else if (v[mid] > key)
            return binsrch(v, mid + 1, end, key);
    }
    return -1;
}
int main()
{
    vector<int> v = {5, 6, 7, 1, 2, 3, 4};
    int i;
    for (i = 0; i < v.size(); i++)
    {
        if (v[i] > v[i + 1])
            break;
    }
    int k;
    cout << "enter value to search ";
    cin >> k;
    int start = i + 1,end = v.size()-1;
    int start2 = 0, end2 = i;
    cout << max(binsrch(v, start, end,k),binsrch(v,start2,end2,k));



}