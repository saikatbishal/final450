#include <bits/stdc++.h>
using namespace std;
namespace name{
    int val = 12;
    int getVal(){
        return val+3;
    }
}
struct node
{
    int num; 
    string str;
    double d;
    char ch;
    // node(num_,str_,d_,ch_)
    // {
    //     num = num_;
    //     str = str_;
    //     d = d_;
    //     ch = ch_;
    // }
};
array<int,5> arr3;
int main()
{
    double val = 34.26;
    cout << val<<endl;
    cout << name::val << endl;
    cout << name::getVal()<<endl;

    //node bittu = new node(23,"Saikat",7.21,'c');

    array<int,10> arr;//container array
    arr.fill(4);
    array<int,5> arr2;
    array<int,6> arr1={1};

    for(auto item:arr)//filled with 4s
    cout << item<<" ";
cout << endl;
    for(auto item:arr1)//all zeros except the 0th index
    cout << item<<" ";
cout << endl;
    for(auto item:arr2)// arr2 throws garbage values
    cout << item<<" ";
cout << endl;
    for(auto item:arr3)//because arr3 is global
    cout << item<<" ";
}