#include <bits/stdc++.h>
using namespace std;
void adjacencyList()
{
int n,m;
cin>>n>>m;
vector<int> adj[n+1];
for(int i=0;i<m;i++)
{
int u,v;
adj[u].push_back(v);
adj[v].push_back(u);
}

}
vector<int> bfs_traversal(int V,vector<int> adj[])
{
vector<int> bfs;
vector<int> vis(v+1,0);
for(int i-0;i<=V;i++){

}
}
int main()
{
int m,n;
cin>>n>>m;
int adj[n+1][n+1]={0};
for(int i=0;i<m;i++)
{
int u,v;
cin>>u>>v;
adj[u][v]=1;
adj[v][u]=1;
}
cout << "   1 2 3 4 5 6 7\n";
for(int i=1;i<n+1;i++)
{ 
cout << i<<"- ";
    for(int j=1;j<n+1;j++)
    {
        cout << adj[i][j]<<" ";
    }
    cout << endl;
}
return 0;
}