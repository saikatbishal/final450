// "<<" is an overloaded operator. they operate like a function.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
vector<int> A = {11,2,3,14};
sort(A.begin(), A.end());
bool present = binary_search(A.begin(), A.end(),3);
// cout << present;
A.push_back(100);
bool p = binary_search(A.begin(), A.end(), 100);
A.push_back(100);
A.push_back(100);
A.push_back(100);
A.push_back(100);
A.push_back(123);
vector<int>::iterator it = lower_bound(A.begin(), A.end(), 100);
vector<int>::iterator it2 = upper_bound(A.begin(), A.end(), 100);
cout << *it << " " << *it2;
cout << endl << it2 - it;
// bool p = binary_search(A.begin(), A.end(), 100);
// cout << p;




// End here
cin.get();
}
