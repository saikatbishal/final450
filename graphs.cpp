#include <vector>
#include <iostream>
#include <queue>
using namespace std;
class Solution{
public:
    void addEdge(vector<int> adj[],int u, int v)
    {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    void printGraph(vector<int> adj[],int V)
    {
        for (int i = 0; i < V; i++)
        {
            cout << "\nAdjacency list of vertex " << i << "\n head ";
            for (auto x : adj[i])
                cout << "-> " << x;
            cout << "\n";
        }   
    }
    vector<int> Bfs(int v, vector<int> adj[])
    {
        vector<int> bfs;
        vector<int> vis(v + 1, 0);
        for (int i = 0; i < v; i++)
        {
            if(!vis[i])
            {
                queue<int> q;
                q.push(i);
                vis[i] = 1;
                while(!q.empty())
                {
                    int node = q.front();
                    q.pop();
                    bfs.push_back(node);
                    for (auto i : adj[node])
                    {
                        if(!vis[i])
                        {
                            q.push(i);
                            vis[i] = 1;
                        }
                    }
                }
            }
        }
        return bfs;
    }
};  
int main()
{
    int V = 5;
    vector<int> adj[V];
    Solution s;
    s.addEdge(adj, 0, 1);
    s.addEdge(adj, 0, 4);
    s.addEdge(adj, 1, 2);
    s.addEdge(adj, 1, 3);
    s.addEdge(adj, 1, 4);
    s.addEdge(adj, 2, 3);
    s.addEdge(adj, 3, 4);
    s.printGraph(adj, V);
    vector<int> bfs = s.Bfs(V, adj);
    for(auto it : bfs)
        cout << it << " ";
    return 0;

}