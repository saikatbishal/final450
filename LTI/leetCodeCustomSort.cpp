#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
class Solution
{
    public:
        string customString(string S, string T)
        {
            string ans;
            unordered_map<char, int> freq;
            for (int i = 0; i < T.size();i++)
                freq[T[i]]++;
            for (int i = 0; i < S.size(); i++)
                while (freq[S[i]]--)
                    ans.push_back(S[i]);
            for(auto i:freq)
                if (i.second > 0)
                    while (i.second--)
                        ans.push_back(i.first);
            return ans;
        }
};
int main()
{
    Solution s;
    cout << s.customString("abc", "cabde");
}
