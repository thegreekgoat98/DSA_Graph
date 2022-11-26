//TC-> O(N+E)
// N->time taken for visiting N nodes, E->travelling adjacant nodes overall.

//SC->O(N+E) + O(N) + O(N)

// Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) 
    {
        vector<bool>vis(V,false); //only V nodes, cuz node numbering starts from 0.
        
        for(int i=0;i<V;++i) //because node numbering starts from 0.
        {
            if(!vis[i])
                if(checkforCycle(i,adj,vis)) //if at any component there is cycle, we will assume, there is a cycle in the graph.
                    return true;
        }
        return false;
    }
    
    
    bool checkforCycle(int i, vector<int> adj[], vector<bool>&vis)
    {
        queue<pair<int,int>>q;
        q.push({i,-1}); //{node,parent}
        vis[i]=true;
        
        while(!q.empty())
        {
            int node=q.front().first; //node
            int par=q.front().second; //[parent]
            q.pop();
            
            for(auto it:adj[node]) //traversing the adjacant node of the node
            {
                if(!vis[it]) //if not visited, put that in queue and mark it visited.
                {
                    vis[it]=true;
                    q.push({it,node});
                }
                else if(par!=it) //if visited, and this current node(it) is not the parent of the node, there is a cycle.
                    return true;
            }
        }
        return false;
    }
