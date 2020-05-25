//22-08-19 2.16am
#include<bits/stdc++.h>
using namespace std;

#define ll                                       long long
#define eb                                     emplace_back
#define pll                                     pair<ll,ll>
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

ll lvl[70][70];
deque<pll>dq;

int dirx[] = {2,2,-2,-2,1,1,-1,-1};
int diry[] = {1,-1,1,-1,2,-2,2,-2};

ll bfs(ll sx,ll sy,ll dx,ll dy)
{
    if(sx==dx && sy==dy)
        return 0;
    lvl[sx][sy]=0;
    dq.eb(pll(sx,sy));

    while(dq.empty()==false)
    {
        ll ux=dq[0].first;
        ll uy=dq[0].second;

        dq.pop_front();

        for(ll i=0; i<8; i++)
        {
            ll vx=ux+dirx[i];
            ll vy=uy+diry[i];

            if(vx>=1 && vx<=8 && vy>=1 && vy<=8)
            {
                if(lvl[vx][vy]==-1)
                {
                    lvl[vx][vy]=lvl[ux][uy]+1;
                    // cout<<"bfs="<<vx<<" "<<vy<<" "<<dx<<" "<<dy<<endl;
                    if(vx==dx && vy==dy)
                        return lvl[vx][vy];
                    dq.eb(pll(vx,vy));
                }
            }
        }
    }
}

int main()
{
    _fastio;
    //open;
    //close;
    ll kase=1,i,j,t,sx,sy,dx,dy;
    char x[3],y[3];
    cin>>t;
    while(t--)
    {
        for(i=1; i<=8; i++)
        {
            for(j=1; j<=8; j++)
            {
                lvl[i][j]=-1;
            }
        }
        dq.clear();
        cin>>x>>y;
        sx=x[0]-'a'+1;
        sy=x[1]-'0';
        dx=y[0]-'a'+1;
        dy=y[1]-'0';
        //cout<<"main = "<<sx<<" "<<sy<<" "<<dx<<" "<<dy<<endl;
        printf("%lld\n",bfs(sx,sy,dx,dy));
    }
    return 0;
}

///DO PEN AND PAPER WORK AFTER READING QUESTIONS CAREFULLY
/// Be confident to Solve if other can do.***
/// Common sense: do something instead of nothing
/// Even a single second counts...
///be super cool,super patient and super focused

