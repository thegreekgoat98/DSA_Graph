
//TC-> O(N+E)
// N->time taken for visiting N nodes, E->travelling adjacant nodes overall.

//SC->O(N+E) + O(N) + O(N)

   // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) 
    {
        vector<bool>vis(V,false);
        for(int i=0;i<V;++i)
        {
            if(!vis[i])
                if(checkCycle(i,-1,adj,vis))
                    return true;
        }
        return false;
    }
    
    
    bool checkCycle(int node,int par,vector<int> adj[],vector<bool>&vis)
    {
        vis[node]=true;
        
        for(auto it:adj[node])
        {
            if(vis[it] && it!=par)
                return true;
            else if(!vis[it])
                if(checkCycle(it,node,adj,vis))
                    return true;
        }
        return false;
    }
