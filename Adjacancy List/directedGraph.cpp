#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m; //n-->number of nodes, m-->number of edges
    cin>>n>>m;
    vector<int>adj[n]; //node numbering starts from 0

    for(int i=0;i<m;++i) //building the adj list
    {
        int u,v; //u,v---> the nodes between which the edge is connected
        cin>>u>>v;
        adj[u].push_back(v); //edge is directed from node u to node v
    }
    

    return 0;
}
