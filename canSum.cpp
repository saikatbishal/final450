#include <iostream>
#include <vector>
#include <map>
using namespace std;
#define vc vector<int>
bool checkSum(int key, vc v, map<int, bool> &memo)
{
    if(memo.find(key) != memo.end())
        return memo[key];
    if(key == 0)
        return true;
    if(key < 0)
        return false;
    for (int i = 0; i < v.size(); i++)
    {
        int rem = key - v[i];
        if (checkSum(rem, v,memo))
        {
            memo[key] = true;
            return true;
        }
    }
    memo[key] = false;
    return false;
}
int main()
{
    vc a1 = {2, 3};
    vc a2 = {2, 4};
    vc a3 = { 14, 7};
    map<int, bool> memo={};
    cout << checkSum(7, a1,memo) << "\n";
    memo = {};
    cout << checkSum(7, a2,memo) << "\n";
    memo = {};
    cout << checkSum(8, a1,memo) << "\n";
    memo = {};
    cout << checkSum(8, a3,memo) << "\n";
    memo = {};
    cout << checkSum(300, a3,memo)<<"\n";
    return 0;
}