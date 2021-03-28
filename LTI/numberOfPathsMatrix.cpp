#include <vector>
#include <iostream>
using namespace std;
int numberOfWays(vector<vector<int>> v, int a, int b)
{
    if (a == v.size()-1 && b == v[0].size()-1)
        return 1;
    if (a < v.size() && b < v[0].size() && v[a][b] == 0)
        return numberOfWays(v, a, b + 1)+numberOfWays(v, a + 1, b);
else
    return 0;
}
int main()
{
    int answer = 0;
    vector<vector<int>> matr = {{0, 0, 0, 1},
                                {0, 1, 0, 0},
                                {0, 0, 0, 0},
                                {0, 0, 0, 1}};
    answer = numberOfWays(matr, 0, 0);
    cout << answer << "\n";

}