void bfs(it adj[][SIZE],int vertex,int startingNode)
{
    for(int i=0; i<vertex; i++)
    {
        if(i!=startingNode)
        {
            color[i]=WHITE;
            dis[i]=INT_MIN;
            parent[i]=-1;
        }
    }
    color[startingNode]=GRAY;
    dis[startingNode]=0;
    parent[startingNode]=-1;   //null
    queue<int>bfsQueue;
    bfsQueue.push(startingNode);
    cout<< "BFS is ";
    while(!bfsQueue.empty())
    {
        int u=bfsQueue.front();
        bfsQueue.pop();
        for(int i=0; i<vertex; i++)
        {
            if(adj[u][i]!=0)
            {
                int v=i;
                if(color[v]==WHITE)
                {
                    color[v]=GRAY;
                    dis[v]=dis[u]+1;
                    parent[v]=u;
                    bfsQueue.push(v);
                }
            }
        }
        color[u]=BLACK;
    }
}

void printPath(int staringNode,int endNode)
{
    char path[SIZE];
    int par=parent[endNode];
    int i=0;
    path[i++]=endNode+ '0';
    path[i++] = ' ';
    while(par!=-1)
    {
        path[i++] = par+ '0';
        path[i++]=' ';
        par=parent [par];
    }
    path[i] = '\0';
    strrev(path);
    cout<< "The path is : "<<path<<endl;
}
