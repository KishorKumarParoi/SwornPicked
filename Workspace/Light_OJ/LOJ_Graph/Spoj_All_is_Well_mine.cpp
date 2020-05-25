//
/*
5
3 6
AWE.QX
LLL.EO
IZZWLL

1 10
ALLIZZWELL

2 9
A.L.Z.E..
.L.I.W.L.

3 3
AEL
LWZ
LIZ

1 10
LLEWZZILLA


YES
YES
NO
NO
YES
*/
#include<bits/stdc++.h>
using namespace std;

#define ll                                       long long
#define eb                                     emplace_back
#define pii                                     pair<int,int>
#define pll                                      pair<ll,ll>
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

char s[110][110];
bool vis[110][110];
ll r,c;
bool ans;
string str;

int dirx[]= {1,1,1,-1,-1,-1,0,0};
int diry[]= {1,0,-1,1,0,-1,1,-1};

void dfs(ll x,ll y,ll k)
{
    if(s[x][y]!=str[k])
        return;
    if(k==9)
    {
        ans=1;
        return;
    }
    for(ll i=0; i<8; i++)
    {
        ll ux=x+dirx[i];
        ll uy=y+diry[i];
        if(0<=ux && ux<r && 0<=uy && uy<c && vis[ux][uy]==0)
        {
            vis[ux][uy]=1;
            dfs(ux,uy,k+1);
            vis[ux][uy]=0;
            if(ans==1)
                return;
        }
    }
}
int main()
{
    _fastio;
    //open;
    //close;
    ll kase=1,t,i,j,k,n,x,y,z,q,m,cnt;
    cin>>t;
    str="ALLIZZWELL";
    while(t--)
    {
        cin>>r>>c;
        for(i=0; i<r; i++)
            cin>>s[i];
        ans=false;
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                vis[i][j]=0;
            }
        }
        for(i=0; i<r && ans==false; i++)
        {
            for(j=0; j<c && ans==false; j++)
            {
                vis[i][j]=1;
                dfs(i,j,0);
                vis[i][j]=0;
            }
        }
        (ans==1) ? cout<<"YES\n" : cout<< "NO\n";
    }
    return 0;
}

/// DO PEN AND PAPERWORK AFTER READING QUESTIONS CAREFULLY
/// Be confident to Solve if others can do.***
/// Common sense: do something instead of nothing
/// Even a single second counts...
/// be super cool, super patient and super focused

