#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    int a[] = {7,10,4,20,15};
    sort(a, a + 5);
    cout << a[3];

}