#include <iostream>
#include <vector>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void transpose_mat(vector<vector<int>> a)
{
    for (int i = 0; i < a.size();i++)
    {
        for (int j = 0; j < a[0].size();j++)
        {
            if (j >= i)
                swap(&a[i][j], &a[j][i]);
        }
    }
    for (int i = 0; i < a.size();i++)
    {
        for (int j = 0; j < a[0].size(); j++)
        {
            cout<< a[i][j]<<" ";
        }
        cout << endl;
    }
    cout << endl;
}
void swap_cols(vector<vector<int>> a)
{
    for (int i = 0; i < a.size();i++)
    {
        for (int j = 0; j < a[0].size();j++)
        {
            if (j >= i)
                swap(&a[i][j], &a[j][i]);
        }
    }

    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < a[0].size() / 2; j++)
        {
            swap(a[i][j], a[i][a[0].size() - 1 - j]);
        }
    }
    for (int i = 0; i < a.size();i++)
    {
        for (int j = 0; j < a[0].size(); j++)
        {
            cout<< a[i][j]<<" ";
        }
        cout << endl;
    }
}
int main()
{
    vector<vector<int>> a = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    for (int i = 0; i < a.size();i++)
    {
        for (int j = 0; j < a[0].size(); j++)
        {
            cout<< a[i][j]<<" ";
        }
        cout << endl;
    }
    cout << "\n";
    swap_cols(a);
    return 0;

}