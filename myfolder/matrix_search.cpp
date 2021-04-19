#include <iostream>
#include <vector>
using namespace std;
int Search_element(vector<vector<int>> &a,int key)
{
    int n = a.size();
    int m = a[0].size();
    //cout << n << " " << m << endl;
    for (int j = 0; j < m; j++)
    {
        if (a[n / 2][j] == key)
            return 1;
        else if (a[n / 2][j] > key)
        {
            if (a[n / 2][j - 1] < key)
            {}
        }
    }
}
int main()
{
    vector<vector<int>> a = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int key;
    cout << "Enter value to search";
    cin >> key;
    Search_element(a,key);
    return 0;
}