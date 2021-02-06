#include <iostream>
#include <vector>
#include <algorithm>
#define n 3
using namespace std;
void distribute(vector<int> v)
{
    sort(v.begin(), v.end());
    vector<int> v2(n, 0);
    int i = 0,start=0;
    while (i < v.size())
    {
        int j = 0;
        while (j < n && i<v.size())
        {
            v2[j] += v[j + start];
            j++;
            i++;
        }
        for(auto s:v2)
            cout << s << " ";
        cout << endl;
        start = start + n;
        reverse(v2.begin(), v2.end());
    }
    cout << endl;
    sort(v2.begin(), v2.end());
    for(auto s:v2)
        cout << s << " ";
}
int main()
{
    vector<int> v = {1, 7, 3, 5, 6, 2, 4,8,9};
    distribute(v);


}