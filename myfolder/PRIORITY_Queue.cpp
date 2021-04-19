#include <iostream>
#include <queue>
using namespace std;
void showqueue(priority_queue<int> q)
{
    priority_queue<int> g = q;
    while(!g.empty())
    {
        cout << " " << g.top();
        g.pop();
    }
    cout << "\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, z;
        cin >> n >> z;
        priority_queue<int> q;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            q.push(x);
        }
        int ctr = 0;
        while (z > 0 && q.top() != 0)
        {
            ctr++;
            z = z-q.top();
            int temp = q.top();
            cout << "z = " << z << "\n";
            q.pop();
            q.push(temp/ 2);
            showqueue(q);
        }
        if (z > 0)
            cout << "Evacuate";
        else
            cout << ctr << "\n";
    }
    return 0;
}
