#include <iostream>
#include <vector>
using namespace std;
//sorting a 2d-matrix
void Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(vector<int> &v, int low, int high)
{
    int i = low, j = high;
    int pivot = v[i];
    while (i < j)
    {
        do
        {
            i++;
        } while (v[i]<=pivot);
        do
        {
            j--;
        } while (v[j]>pivot);
        if(i<j)
            Swap(&v[i], &v[j]);
    }
    Swap(&v[j], &v[low]);
    return j;
}
void sort(vector<int> &v,int start, int end)
{
    if(start<end)
    {
        int p = partition(v,start,end);
        sort(v, start, p);
        sort(v, p + 1, end);
    }
}
vector<vector<int>> sortMatrix(vector<vector<int>> &matr)
{
    vector<int> v(matr.size() * matr[0].size());
    for (int i = 0; i < matr.size();i++)
    {
        for (int j = 0; j < matr[0].size(); j++)
            v[i * matr[0].size() + j] = matr[i][j];
    }
    sort(v,0,v.size());
    for (int i = 0; i < v.size(); i++)
    {
        matr[i/matr[0].size()][i%matr[0].size()]=v[i];
    }
    
    return matr;
}
int main()
{
    vector<vector<int>> matr = {{3, 12, 1, 5, 4},
                                {6, 11, 2, -4, 9},
                                {8, 10, 7, -1, 0}};
    //cout << matr.size()<<" "<<matr[0].size();
    sortMatrix(matr);
    for (int i = 0; i < matr.size(); i++)
    {
        for (int j = 0; j < matr[0].size(); j++)
            cout << matr[i][j]<<" ";
        cout << endl;
    }
    return 0;
}