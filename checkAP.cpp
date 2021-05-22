#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool func()
{
    vector<int> arr = {1, 2, 4};
    if(arr.size()==2 || arr.size()==1)return true;
        sort(arr.begin(),arr.end());
        int diff = arr[0]-arr[1];
        cout << "diff = " << diff << "\n";
        for(int i=1;i<arr.size()-1;i++)
        {
            cout << "current diff = " << arr[i] - arr[i + 1] << "\n";
            if(arr[i]-arr[i+1]!=diff)
                return false;
        }
        return true;  
}
int main()
{
    cout << func();
}