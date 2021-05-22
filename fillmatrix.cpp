#include <iostream>
#include <vector>
using namespace std;
void Print(const vector<vector<int>> &mat)
{
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
}
int main()
{
    int m, n;
    cin >> n;
    m = n * n;
    vector<vector<int>> matrix(m);
    
    for (int i = 0; i < n;i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrix[i].push_back(m--);
        }
    }
    Print(matrix);
}