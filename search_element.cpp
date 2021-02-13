#include <bits/stdc++.h>
using namespace std;
binSearch(vector<int>v,int start,int end,int key)
{
    int mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (v[mid] == key)
            return mid;
        else if (v[mid] < key)
            return binSearch(v, 0, mid - 1, key);
        else if (v[mid] > key)
            return binSearch(v, mid + 1, end, key);
}
return -1;
}
int main()
{
    vector<int> v;
    int m,x;
    cout << "Enter the number of characters";
    cin >> m;
    while (m--)
    {
        int n;
        cin >> n;
        v.push_back(n);
    }
    sort(v.begin(), v.end());
    cout << "Enter a number for search ";
    cin >> x;
    int result = binSearch(v, 0, v.size() - 1, x);
    if (result == -1)
        cout << "Not found";
    else cout << "FOund at " << result;
}