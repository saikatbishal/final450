#include <iostream>
#include <vector>
using namespace std;
int main()
{
    //all prime numbers from 1 to 100;
    //first mark everything from 1 to 100 as prime;
    int v[1000]={0};

    for (int i = 0; i < 1000; i++)
    {
        for (int j = 2; j * j < 1000;j++)
        {
            if (i % j == 0 && j < i)
            {
                v[i] = 1;
                break;
            }
        }
    }
    cout << "\n\n";
    for (int i = 2; i < 1000; i++)
    {
        if (v[i] == 0)
            cout << i << " ";
    }
}
// 1 2 3 4 5 6 7 8 9 10
// 0 1 1