//20-08-19 6.19am
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


bool vis[100100],tree;
/*
map< ll, vector<ll>  > ed;

void dfs(ll n,ll prev)
{
    for(ll i=0; i<ed[n].size(); i++)
    {
        if(vis[ed[n][i]]==0)
        {
            vis[ed[n][i]]=1;
            dfs(ed[n][i],n);
        }
        else
        {
            if(ed[n][i]!=prev)
            {
                tree=false;
                return ;
            }
        }
    }
}
int main()
{
    _fastio;
    //open;
    //close;
    ll n,m,u,v;
    tree=true;
    cin>>n>>m;
    for(int i=0; i<m; i++)
    {
        cin>>u>>v;
        ed[u].push_back(v);
        ed[v].push_back(u);
    }
    vis[1]=1;
    dfs(1,0);
    for(ll i=2; i<=n; i++)
    {
        if(vis[i]==0)
        {
            tree=false;
            break;
        }
    }
    if(tree==true)
        cout<< "YES\n";
    else
        cout<< "NO\n";
    return 0;
}
*/
map< ll, vector<ll>  > ed;

void dfs(ll n)
{
    for(ll i=0; i<ed[n].size(); i++)
    {
        if(vis[ed[n][i]]==0)
        {
            vis[ed[n][i]]=1;
            dfs(ed[n][i]);
        }
    }
}

int main()
{
    _fastio;
    //open;
    //close;
    ll n,m,u,v;
    tree=true;
    cin>>n>>m;

    for(int i=0; i<m; i++)
    {
        cin>>u>>v;
        ed[u].push_back(v);
        ed[v].push_back(u);
    }


    vis[1]=1;
    dfs(1);


    int number_visited_nodes=0,cnt=0;
    for(ll i=2; i<=n; i++)
    {
        if(vis[i]!=0)
        {
            number_visited_nodes++;
        }
    }
    //cout<<number_visited_nodes<<endl;
    //cout<<n<<" "<<m<<endl;

    if(n==m+1)
    {
        if((number_visited_nodes+1)==n)
            cout<< "YES\n";
        else
            cout<< "NO\n";
    }
    else
        cout<< "NO\n";
    return 0;
}

///DO PEN AND PAPER WORK AFTER READING QUESTIONS CAREFULLY
/// Be confident to Solve if other can do.***
/// Common sense: do something instead of nothing
/// Even a single second counts...
///be super cool,super patient and super focused
