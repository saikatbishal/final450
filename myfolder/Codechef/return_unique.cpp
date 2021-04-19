#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
vector<int> removeDuplicates(vector<int> v)
{
    unordered_map<int, int> database;
    vector<int> v1;
    for (auto data : v)
    {
        if (database.count(data) == 0)    
        {
            database[data] += 1;
            v1.push_back(data);
        }
    }
    return v1;
}
int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    vector<int> v1 = removeDuplicates(v);
    for (auto s : v1)   
    {
        cout << s << " ";
    }
    cout << endl;
}