#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n, ctr = 0;
        cin >> n;
        //vector<int> v;
        int max = INT32_MAX;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x < max){
                ctr++;
                max = x;
            }
        }   
    // for (size_t i = 0; i < count; i++)
    // {
    //     /* code */
    // }
        cout << ctr << endl;
    }

}