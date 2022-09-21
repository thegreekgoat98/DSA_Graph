#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m; //n-->number of nodes, m-->number of edges
    cin>>n>>m;
    vector<pair<int,int>>adj[n]; 

    for(int i=0;i<m;++i) //building the adj list
    {
        int u,v,wt; //wt--->weight between the two nodes 
        cin>>u>>v>>wt;
        adj[u].push_back({v,wt});
        adj[v].push_back({u,wt}); //if it is undirected graph
    }
    

    return 0;
}
