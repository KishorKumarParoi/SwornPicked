void dfs(int vertex)
{
    for(int i=0;i<vertex;i++)
    {
        color[i]=WHITE;
    }
    time=0;
    cout<< "DFS is : ";
    for(int i=0;i<vertex;i++)
    {
        if(color[i]=WHITE)
        {
            dfsVisit(i,vertex);
        }
    }
}

void dfsVisit(int u,int vertex)
{
    color[u]=GRAY;
    dis[u]=time++;
    for(int i=0;i<vertex;i++)
    {
        if(adj[u][i]==1)
        {
            int v=i;
            if(color[v]==WHITE)
            {
                parent[v]=u;
                dfsVisit(v,vertex);
            }
        }
    }
    color[u]=black;
    fi[u]=time++;
    cout<<u<< " ";
}
