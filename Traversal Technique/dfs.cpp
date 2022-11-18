//TC and SC same as BFS algorithm

//TC-> O(N+E)
// N->time taken for visiting N nodes, E->travelling adjacant nodes overall.

//SC->O(N+E) + O(N) + O(N)



// Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) 
    {
        vector<int>ans; //to store the dfs ordered nodes
        vector<int>vis(V,0);
        
        for(int i=0;i<V;++i)
        {
            if(!vis[i])
                dfs(i,vis,adj,ans);
        }
        return ans;
    }
    ////////////////////
    void dfs(int node,vector<int>&vis,vector<int> adj[],vector<int>&ans)
    {
        vis[node]=1;
        ans.push_back(node);
        for(auto it:adj[node])
        {
            if(!vis[it])
                dfs(it,vis,adj,ans);
        }
    }
