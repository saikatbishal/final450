#include <iostream>
#include <vector>
using namespace std;
bool search_subset(vector<int> a1, vector<int> a2)
{
if(a1.size()<a2.size())
    return false;
else







}
int main()
{
    vector<int> a1, a2;
    cout << "Enter positive numbers into the first array. Enter -1 to terminate input stream\n";
while(! -1)
{
    int x;
    cin >> x;
    a1.push_back(x);
}
cout << "Enter positive numbers into the second array. Enter -1 to terminate input stream\n";
while (! -1)
{
    int y;
    cin >> y;
    a2.push_baxk(y);
}
bool ans = search_subset(a1, a2);
}