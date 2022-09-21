#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m; //n-->number of nodes, m-->number of edges
    cin>>n>>m;
    vector<int>adj[n];

    for(int i=0;i<m;++i) //building the adj list
    {
        int u,v; //u,v---> the nodes between which the edge is connected
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    

    return 0;
}
