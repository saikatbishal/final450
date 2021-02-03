#include <iostream>
#include <utility>
#include <vector>
using namespace std;
int main()
{
    std::pair <int, char> p1;
    p1.first = 100;
    p1.second = 'G';
    cout << p1.first << " " << p1.second<<endl;
    vector<int> v1 = {1, 2, 3, 4};
    vector<pair<int, char>> v2;
    int a1[] = {1, 2, 3, 4};
    char c1[] = {'a', 'b', 'c', 'd'};
    int n = sizeof(a1) / sizeof(a1[0]);
    for (int i = 0; i < n;i++)
    {
        v2.push_back(make_pair(v1[i], c1[i]));
    }
    for (int i = 0; i < n; i++)
    {
        cout << v2[i].first << " " << v2[i].second << endl;
    }
}