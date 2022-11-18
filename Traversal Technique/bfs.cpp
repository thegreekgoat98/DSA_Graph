//TC-> O(N+E)
// N->time taken for visiting N nodes, E->travelling adjacant nodes overall.

//SC->O(N+E) + O(N) + O(N)


// Function to return a list containing the BFS traversal of the graph.

    vector<int> bfsOfGraph(int V, vector<int> adj[]) 
    {
        vector<int>ans; //for storing the BFS order nodes
        vector<int>vis(V,0);
        for(int i=0;i<V;++i) //node numbering starts from 0.
        {
            if(!vis[i])
            {
                queue<int>q;
                q.push(i);
                vis[i]=1;
                
                while(!q.empty())
                {
                    int node=q.front();
                    q.pop();
                    ans.push_back(node);
                    
                    for(auto it:adj[node])
                    {
                        if(!vis[it])
                        {
                            q.push(it);
                            vis[it]=1;
                        }
                    }
                }
            }
        }
        return ans;
    }
