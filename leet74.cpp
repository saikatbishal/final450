#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool searchMatrix(vector<vector<int>> & matrix, int target)
    {
        int r = matrix.size();
        int c = matrix[0].size()-1;
        int start = 0;
        int end = r - 1;
        while(start <= end)
        {
            int mid = (start + end)/2;
            if (matrix[mid][c] == target)
            {
                return true;
            }
            else if(matrix[mid][c]>target)
            {
                end = mid - 1;
            }
            else if (matrix[mid][c] < target)
            {
                start = mid + 1;
            }
        }
        return searchVec(matrix[start],target);
    }
    bool searchVec(vector<int> arr,int target)
    {
        int end = arr.size() - 1;
        int start = 0;
        while(start<=end)
        {
            int mid = (start + end) / 2;
            if(arr[mid] == target)
            {
                return true;
            }
            else if(arr[mid] < target)
            {
                start = mid + 1;
            }
            else if (arr[mid] > target)
            {
                end = mid - 1;
            }
        }
        return false;
    }
};
int main()
{
    vector<vector<int>> c = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    cout << "Enter target\n";
    int target;
    cin >> target;
    Solution s;
    cout << s.searchMatrix(c,target);
}