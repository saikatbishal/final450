#include <iostream>
#include <vector>
using namespace std;
int factorial (int n)
{
    if(n==1)
        return 1;
    if(n==0)
        return 0;
    return factorial(n - 1) * n;
}

//this function may break for larger values of 'n'
int sumNum( vector<int> &arr, int n)
{
    if(n==0)
        return arr[n];
    return sumNum(arr,n-1) + arr[n];
}
vector<int> sumArr(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        arr[n] = sumNum(arr, i);
    }
    return arr;
}
int main()
{
    // int ans = factorial(12);
    // cout << ans;
    vector<int> arr = {1, 2, 3, 4, 5, 7};
    vector<int> solArr = sumArr(arr);
    for(auto item : solArr)
        cout << item << " ";
    return 0;
}