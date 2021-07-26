using namespace std;
#include <bits/stdc++.h>
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    srand(time(NULL));
    int t = rand()%2+1;
    cout <<t<<endl;
    cout <<t<<endl;
    while(t--)
    {
        int n=rand()%5+1;
        cout <<n<<endl;
        for(int i=0;i<n;i++)
        {
            cout << (rand()%6+1);
        }

    }
}
