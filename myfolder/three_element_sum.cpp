#include <iostream>
#include <vector>
using namespace std;
void two_pointers_tech(vector<int> a, int k)
{
    int n = a.size(),flag = 0;
    for (int i = 0; i < n;i++){
        int c = a[i];
    int start = i+1, end = n - 1;
        while (start <=end)
        {
            if(a[start]+a[end]>k-a[i])
                end--;
            else if (a[start] + a[end] < k-a[i])
                start++;
            else if (a[start] + a[end] == k-a[i])
            {
                flag = 1;
                break;
            }
        }
    if(flag == 1)
        cout << a[start] << "+" << a[end] << "+" << a[i] << "=" << k<<endl;
    else
        cout << "Not found\n";
    }

}
int main()
{
    vector<int> v = {1, 2, 3, 5, 7, 8, 12, 14};
    int k = 13;
    two_pointers_tech(v, k);
}