#include <iostream>
#include <string>
#include <vector>
#include <utility>
using namespace std;
#define vvi vector<vector<int>>
pair<int,int> srch(vvi v,int key,int i,int j)
{
    if (i < v.size() && j >= 0)
    {   
        if (v[i][j] == key)
        {
            pair<int, int> p = make_pair(i, j);
            return p;
        }
        if (v[i][j] < key)
            return srch(v, key, i + 1, j);
        if (v[i][j] > key)
            return srch(v, key, i, j - 1);
    }
    else
    {
        return make_pair(-1,-1);
    }
}
int main(void)
{

    vvi v = {{10, 20, 30, 40},
            {11, 21, 36, 43},
            {25, 29, 39, 50},
            {50, 60, 70, 80}};
    int key;
    cout << "Enter key for srch\n";
    cin >> key;
    pair<int,int> p = srch(v, key,0,v[0].size()-1);
    if(p.first==-1)
        cout << "Not Found\n";
    else
        cout << "[" << p.first << "]"
            << "[" << p.second << "]\n";
}