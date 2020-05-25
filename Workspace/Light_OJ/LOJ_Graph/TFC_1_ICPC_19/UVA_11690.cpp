//22-08-19 9.48pm
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

vector<ll>adj[10100],connected;
bool ans,vis[10100];

void bfs(ll src)
{
    queue<ll>q;
    vis[src]=1;
    q.push(src);
    while(!q.empty())
    {
        int u=q.front();
        connected.eb(u);
        q.pop();
        for(ll i=0; i<adj[u].size(); i++)
        {
            int v=adj[u][i];
            if(vis[v]==0)
            {
                vis[v]=1;
                q.push(v);
            }
        }
    }
}
int main()
{
    _fastio;
    //open;
    //close;
    ll kase=1,e,t,i,j,k,n,x,y,z,q,m,cnt;
    cin>>t;
    while(t--)
    {
        memset(vis,0,sizeof(vis));
        cin>>n>>e;
        int a[n+10];
        for(i=0; i<n; i++)
            cin>>a[i];
        for(i=0; i<e; i++)
        {
            int n1,n2;
            cin>>n1>>n2;
            adj[n1].eb(n2);
            adj[n2].eb(n1);
        }
        int x=1,sum=0;
        bfs(0);
        for(i=0; i<n; i++)
        {
            if(vis[i]==0)
            {
                for(j=0; j<connected.size(); j++)
                {
                    int u=connected[j];
                    sum+=a[u];
                }
                connected.clear();
                if(sum==0)
                {
                    bfs(i);
                }
                else
                {
                    x=0;
                    break;
                }
                sum=0;
            }
        }
        connected.clear();
        (x==1)? cout<<"POSSIBLE\n": cout<< "IMPOSSIBLE\n";
        for(i=0; i<10100; i++)
            adj[i].clear();
        sum=0;
    }
    return 0;
}

/// DO PEN AND PAPER WORK AFTER READING QUESTIONS CAREFULLY
/// Be confident to Solve if other can do.***
/// Common sense : do something instead of nothing
/// Even a single second counts...
/// be super cool , super patient and super focused

