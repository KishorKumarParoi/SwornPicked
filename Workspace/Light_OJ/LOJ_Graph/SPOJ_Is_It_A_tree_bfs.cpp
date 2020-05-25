// 12-02-20
#include<bits/stdc++.h>
using namespace std;

#define scl(n)  scanf("%d",&n)

vector<int>graph[10010];
vector<int>vis(10010);
int node,edge,x,y;
bool tree;

void dfs(int u)
{
    for(int i=0; i<graph[u].size(); i++)
    {
        if(vis[graph[u][i]] == 0)
        {
            vis[graph[u][i]] = 1;
            dfs(graph[u][i]);
        }
    }
}

int main()
{
    scl(node);
    scl(edge);

    for(int i=0; i<edge; i++)
    {
        scl(x);
        scl(y);

        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    tree = true;

    vis[1]=1;
    dfs(1);

    int visited_nodes_cnt = 0;
    for(int i=2; i<=node; i++)
    {
        if(vis[i])
            visited_nodes_cnt++;
    }

    //printf("%d\n",visited_nodes_cnt);

    if(node==(edge+1))
    {
        if((visited_nodes_cnt+1) == node )
            printf("YES\n");
        else
            printf("NO\n");
    }

    else
        printf("NO\n");

    return 0;
}



