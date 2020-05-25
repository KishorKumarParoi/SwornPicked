// 15-02-20
#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define scl(n)  scanf("%d",&n)

vector<int>graph[33];
bool vis[33];
int dis[33],cnt;
map<int,int>mp;

int bfs(int src,int val,int node)
{
    memset(vis,0,sizeof(vis));
    memset(dis,0,sizeof(dis));

    queue<int>q;
    q.push(mp[src]);

    vis[src]=true;
    dis[src]=0;

    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        for(int i=0; i<graph[u].size(); i++)
        {
            int v = graph[u][i];

            if(vis[v]==0)
            {
                vis[v]=true;
                dis[v]= dis[u]+1;
                q.push(v);
            }
        }
    }

    cnt = 0;
    for(int i=1; i<=node; i++)
    {
        if(dis[i]>val)
            cnt++;
    }
}



int main()
{
    int n,kase=1;

    while(scl(n)==1)
    {
        if(n==0)
            break;

        mp.clear();
        for(int i =0; i<33; i++)
        {
            graph[i].clear();
        }

        int node=1;

        for(int i=0; i<n; i++)
        {
            int x,y;
            scl(x);
            scl(y);

            if(mp[x]==0)
            {
                mp[x]=node,node++;
            }
            if(mp[y]==0)
            {
                mp[y]=node, node++;
            }

            graph[mp[x]].pb(mp[y]);
            graph[mp[y]].pb(mp[x]);
        }

        int q,val;
        while(scanf("%d%d",&q,&val)==2)
        {
            if(q==0 && val==0)
                break;

            if(val==0)
                printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",kase++,mp.size()-1,q,val);
            else
            {
                bfs(q,val,node-1);
                printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",kase++,cnt,q,val);
            }
        }
    }
}
