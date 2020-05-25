//19-08-19 10.59pm
#include<bits/stdc++.h>
using namespace std;

#define eb emplace_back

vector<int>adj[2222];
vector<bool>color(2222),vis(2222);

bool BiColor(int source)     //white=0  ,  black =1
{
    queue<int>q;
    q.push(source);
    vis[source]=true;
    color[source]=0;
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(int i=0; i<adj[u].size(); i++)
        {
            int v=adj[u][i];
            if(vis[v])
            {
                if(color[v]==color[u])
                    return false;
                continue;
            }
            vis[v]=true;
            if(color[u])
                color[v]=false;
            else
                color[v]=true;
            q.push(v);
        }
    }
    return true;
}
int main()
{
    int t,kase=1;
    cin>>t;
    while(t--)
    {
        int node,edge,x,y;
        cin>>node>>edge;
        for(int i=0; i<edge; i++)
        {
            cin>>x>>y;
            adj[x].eb(y);
            adj[y].eb(x);
        }
        bool flag=true;
        for(int i=1; i<=node; i++)
        {
            if(vis[i]==1)
                continue;
            if(!BiColor(i))
            {
                flag=false;
                break;
            }
        }
        if(flag)
            printf("Scenario #%d:\nNo suspicious bugs found!\n",kase++);
        else
            printf("Scenario #%d:\nSuspicious bugs found!\n",kase++);

        for(int i=0; i<2222; i++)
        {
            adj[i].clear();
            color[i]=0;
            vis[i]=0;
        }
    }
    return 0;
}

