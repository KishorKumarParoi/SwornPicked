//20-08-19 7.05pm
#include<bits/stdc++.h>
using namespace std;

#define ll                                       long long
#define eb                                     emplace_back
#define pii                                     pair<int,int>
#define pII                                   pair<ll,ll>
#define mp                                     map<int,int>
#define _fastio                              ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define DB(x)                                cerr << __LINE__ << ": " << #x << " = " << (x) << endl
#define Pi                                      acos(-1.0)
#define open                                  freopen("input.txt","r",stdin)         //opening input file
#define close                                  freopen ("output.txt","w",stdout)     //opening output file
#define fori(i,n)                              for(int i=1;i<=n;++i)
#define forn(i,n)                             for(int i=0;i<n;++i)
#define sz(x)                                  int(x.size())
#define error(x)                              cout<<#x<<" "<<x<<endl

int vis[2222];
bool susp;
vector<ll> adj[2222];

void dfs(ll n)
{
    for(ll i=0; i<adj[n].size(); i++)
    {
        if(vis[adj[n][i]]==0)
        {
            if(vis[n]==1)
                vis[adj[n][i]]=2;
            else
                vis[adj[n][i]]=1;
            dfs(adj[n][i]);
        }
        else
        {
            if(vis[n]==vis[adj[n][i]])
                susp=true;
        }
    }
}

int main()
{
    _fastio;
    //open;
    //close;
    int t,kase=1;
    cin>>t;
    while(t--)
    {
        for(int i=0; i<2222; i++)
        {
            adj[i].clear();
        }
        memset(vis,0,sizeof(vis));
        int node,edge,x,y;
        cin>>node>>edge;
        for(int i=0; i<edge; i++)
        {
            cin>>x>>y;
            adj[x].eb(y);
            adj[y].eb(x);
        }
        susp=false;
        for(ll i=1; i<=node; i++)
        {
            if(vis[i]==0)
            {
                vis[i]=1;
                dfs(i);
            }
        }
        if(susp==true)
            printf("Scenario #%d:\nSuspicious bugs found!\n",kase++);
        else
            printf("Scenario #%d:\nNo suspicious bugs found!\n",kase++);
    }
    return 0;
}

///DO PEN AND PAPER WORK AFTER READING QUESTIONS CAREFULLY
/// Be confident to Solve if other can do.***
/// Common sense: do something instead of nothing
/// Even a single second counts...
///be super cool,super patient and super focused
