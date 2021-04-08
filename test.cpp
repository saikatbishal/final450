#include <iostream>
#include <vector>
using namespace std;
class Solution
{
    public :
        int removeDuplicates(vector<int>& nums)
        {
            int j = 0;
            int n = nums.size();
            for (int i = 0; i < n - 1;i++)
                if (nums[i] != nums[i + 1])
                    nums[j++] = nums[i];
            nums[j++] = nums[n - 1];
            return j;
        }
};
int main()
{
    vector<int> v = {1, 1, 2, 2, 2, 3, 4,4, 5, 5, 6};
    Solution s;
    int len = s.removeDuplicates(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}