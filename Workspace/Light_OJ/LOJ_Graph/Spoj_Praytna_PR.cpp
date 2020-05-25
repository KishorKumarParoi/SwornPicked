//21-08-19 8.15am
#include<bits/stdc++.h>
using namespace std;

#define ll                                       long long
#define pb                                     push_back
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

vector<ll> ed[100100];
ll vis[100100];
//ll c[10100];
void bfs(ll src)
{
    queue<ll>dq;
    vis[src]=1;;
    dq.push(src);
    while(!dq.empty())
    {
        ll u = dq.front();
        dq.pop();
        for(ll i=0; i<ed[u].size(); i++)
        {
            ll v=ed[u][i];
            if(vis[v]==0)
            {
                vis[v]=1;
                dq.push(v);
            }
        }
    }
}

int main()
{
    _fastio;
    //open;
    //close;
    ll t,n,u,v,q,i,kase;
    cin>>t;
    while(t--)
    {
        ll c=0;
        cin>>n;
        cin>>q;
        memset(vis,0,sizeof(vis));
        for(kase=0; kase<q; kase++)
        {
            cin>>u>>v;
            ed[u].pb(v);
            ed[v].pb(u);
        }
        for(i=0; i<n; i++)
        {
            if(vis[i]==0)
            {
                bfs(i);
                c++;
            }
        }
        for(i=0; i<100100; i++)
        {
            ed[i].clear();
           // vis[i]=0;
        }
        printf("%lld\n",c);
    }
    return 0;
}

///DO PEN AND PAPER WORK AFTER READING QUESTIONS CAREFULLY
/// Be confident to Solve if other can do.***
/// Common sense: do something instead of nothing
/// Even a single second counts...
///be super cool,super patient and super focused

