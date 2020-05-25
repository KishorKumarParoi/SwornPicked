#include<bits/stdc++.h>
#include<algorithm>
#include<iterator>
#include<map>
using namespace std;


int vis[2100];
map< int, vector<int> > adj;
bool ans;


void dfs(int n)
{
    for(int i=0; i<adj[n].size(); i++)
    {
        int v=adj[n][i];
        if(vis[v]==0)
        {
            if(vis[n]==1)
                vis[v]=2;
            else
                vis[v]=1;
            dfs(v);
        }
        else
        {
            if(vis[v]==vis[n])
                ans=true;
        }
    }
    //cout<<"n "<<n<<endl;
}
int main()
{
    int i,j,n,t,node,edge;
    //vector<int>v;
    cin>>t;
    for(int k=1; k<=t; k++)
    {
        adj.clear();
        memset(vis,0,sizeof(vis));
        cin>>node>>edge;
        for(i=0; i<edge; i++)
        {
            int node1,node2;
            cin>>node1>>node2;
            adj[node1].push_back(node2);
            adj[node2].push_back(node1);
        }
        ans=false;
        for(i=1; i<=node; i++)
        {
            //cout<<i<<" "<<vis[i]<<endl;
            if(vis[i]==0)
            {
                vis[i]=1;
                dfs(i);
            }
        }
        if(ans==false)
            printf("Scenario #%d:\nNo suspicious bugs found!\n",k);
        else
            printf("Scenario #%d:\nSuspicious bugs found!\n",k);
    }
    return 0;
}
