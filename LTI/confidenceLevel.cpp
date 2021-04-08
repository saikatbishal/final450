#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void fillPrime(vector<int> &v, int a)
{
    v.push_back(2);
    int i = 3;
    while(a)
    {
        // cout << "a = " << a<<endl; -- log
        if (isPrime(i))
        {
            a--;
            v.push_back(i);
        }
        i++;
    }
}
bool isPrime(int a)
{
    for (int i = 2; i * i <= a; i++)
        if (a % i == 0)
            return false;
    return true;
}
int soln(int input2,int ans)
{
    while (input2 > 0)
    {
        //cout << temp << " ";
        int a, i;
        for (i = 0; i < v.size(); i++)
            if (v[i] <= input2)
                break;
        //cout << v[i] << " ";
        while (input2 % v[i] == 1)
        {
            i--;
        }
        ans += input2 / v[i - 1];
        soln(input2 % v[i - 1]);
    }

}
int minDays(int input1, int input2)
{
    int ans = 0;
    vector<int> v;
    fillPrime(v,input1-1);
    sort(v.begin(), v.end(), greater<>());
    while (input2 > 0)
    {
        //cout << temp << " ";
        int a, i;
        for (i = 0; i < v.size(); i++)
            if (v[i] <= input2)
                break;
        //cout << v[i] << " ";
        while (input2 % v[i] == 1)
        {
            i--;
        }
        ans += input2 / v[i - 1];
        input2 = input2 % v[i - 1];
    }
    return ans;
}
int main()
{
    int a, b;
    cin >> a>> b;
    int ans = minDays(a, b);

    /*  cout << v.size() << endl;
        for (auto c : v)
        cout << c << " ";   */
    cout << ans;
    return 0;
}