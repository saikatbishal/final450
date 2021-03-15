#include <iostream>
#include <vector>
using namespace std;
int countPaths(vector<vector<int>> v)
{
    int row = v.size(), col = v[0].size();
    vector<vector<int>> paths(row, vector<int>(col, 0));
    if(v[0][0]==1)
        paths[0][0] = 1;
    for (int i = 1; i < row; i++)
    {
        if(v[i][0] == 1)
            paths[i][0] = paths[i - 1][0];
    }
    for (int j = 1; j < col; j++)
    {
        if (v[0][j] == 1)
            paths[0][j] = paths[0][j - 1];
    }
    for (int i = 1; i < row; i++)
        for (int j = 1; j < col; j++)
            if (v[i][j] == 1)
                paths[i][j] = paths[i - 1][j] + paths[i][j - 1];
    return paths[row - 1][col - 1];
}
int main()
{
    vector<vector<int>> v;
    v = {{1, 1, 0, 0},
         {1, 1, 1, 1},
         {0, 1, 0, 1},
         {1, 1, 1, 1}};
    int ans = countPaths(v);
    cout << ans;
}