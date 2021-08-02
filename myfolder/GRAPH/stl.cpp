#include <bits/stdc++.h>
using namespace std;
#define  vi vector<int>
//globally the maximum size of an array can be 10^7 i.e. 10000000 (int) and 10^8 for boolean
// locally that size falls to 10^6 i.e. 1000000 (int) and 10^7 for booble

void code1()
{
    vector<int> c={1,2,3,4,5};
    for(int i=0;i<5;i++)
    {
        cout << c.at(i)<<" ";
    }
    cout << endl;
    for(auto it : c)
    {
        cout << it <<" ";
    }
    array<int,10> c1;
    c1={0,1,2};
    cout<< endl;
    for(auto it = c1.rbegin(); it != c1.rend(); it++)
    { 
        cout << *it<<" ";
    }
    string s ="saikat";
    for(auto it = s.rbegin();it!=s.rend();it++)
    {
        cout << *it;
    }
    cout<< endl<< s.front()<<" "<< s.back();

}
void Vectors()
{
    vector<int> v;
    v.push_back(1);
    while(v.size()<10)
    {
        v.push_back(v.size()+1);
    }
    v.pop_back();
    for(auto item : v)
    {
        cout << item<< " ";
    }
    v.clear();
    if(v.size()==0)
        cout << "empty\n";
}
int main()
{
    vector<int> v(4,10);
    vector<int> v1(4,5);
    vector<int> v2(v1.begin(),v1.end()-1);
    for(auto it : v2)
    {
        cout << it<<" ";
    }
    cout << endl;
    vi v3(v);
    for(auto it : v3)
        cout << it<<" ";
}