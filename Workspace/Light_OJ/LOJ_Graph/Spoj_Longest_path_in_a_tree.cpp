//21-08-19 7.36m
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

map<ll, vector<ll> > ed;
bool vis[10100];
ll lvl[10100],leaf,mx;
deque<ll>dq;


void bfs1(ll src)
{
    vis[src]=1;
    lvl[src]=0;
    dq.eb(src);
    while(dq.empty()==false)
    {
        ll u = dq[0];
        dq.pop_front();
        for(ll i=0; i<ed[u].size(); i++)
        {
            ll v=ed[u][i];
            if(lvl[v]==-1)
            {
                lvl[v]=lvl[u]+1;
                dq.eb(v);
                if(lvl[v]>mx)
                {
                    mx=lvl[v];
                    leaf=v;
                }
            }
        }
    }
}
void bfs2(ll src)
{
    vis[src]=1;
    lvl[src]=0;
    dq.eb(src);
    while(dq.empty()==false)
    {
        ll u = dq[0];
        dq.pop_front();
        for(ll i=0; i<ed[u].size(); i++)
        {
            ll v=ed[u][i];
            if(lvl[v]==-1)
            {
                lvl[v]=lvl[u]+1;
                // cout<<lvl[v]<<endl;
                dq.eb(v);

                if(lvl[v]>mx)
                    mx=lvl[v];
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
    cin>>n;

    for(kase=1; kase<=n-1; kase++)
    {
        cin>>u>>v;
        ed[u].eb(v);
        ed[v].eb(u);
    }

    for(i=1; i<=n; i++)
    {
        lvl[i]=-1;
    }

    mx=0;
    leaf=1;
    bfs1(1);

    for(i=1; i<=n; i++)
    {
        lvl[i]=-1;
    }

    mx=0;
    dq.clear();
    bfs2(leaf);
    cout<<mx<<endl;
    return 0;
}

///DO PEN AND PAPER WORK AFTER READING QUESTIONS CAREFULLY
/// Be confident to Solve if other can do.***
/// Common sense: do something instead of nothing
/// Even a single second counts...
///be super cool,super patient and super focused
