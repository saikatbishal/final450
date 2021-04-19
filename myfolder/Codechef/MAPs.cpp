#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>
using namespace std;
#include <string>
void func1()
{
    int n;
    cin >> n;
    map<string, int> db;
    string s;
    while (n--)
    {
        cin >> s;
        if (db.count(s) == 0)
        {
            cout << "OK" << endl;
            db[s] += 1;
        }
        else 
        {
            cout << s << db[s] << endl;
            db[s] += 1;
        }
    }
}
void func2()
{
    //simple map as used here takes O(log n) time for each search;
    //an unordered map would take O(1) or constant time for each search;

    vector<int> v1 = {1, 1, 2, 0, 3, 5, 3}, v2 = {10, 15, 20, 25, 30, 35, 40};
    map<int, int> database;
    for (int i = 0; i < v1.size(); i++)
    {
        database.insert(pair<int,int>(v2[i], v1[i]));
    }
    map<int, int>::iterator it;
    for (it = database.begin(); it != database.end(); ++it)
    {
        cout << it->first << "\t" << it->second << "\n";
    }
}
vector<int> removeDuplicates(int *a, int size)
{
    vector<int> output;
    unordered_map<int, int> seen;
    for (int i = 0; i < size; i++)
    {
        if (seen.count(a[i]) > 0)
            continue;
        seen[a[i]] = 1;
        output.push_back(a[i]);
    }
    return output;
}
int main()
{
    int a[] = {1, 2, 3, 3, 2, 1, 4, 3, 6, 5, 5};
    vector<int> output = removeDuplicates(a, 11);
    for (auto s : output)
    {
        cout << s << " ";
    }
        //func2();
        //func1();
        return 0;
}