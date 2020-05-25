//12-2-20
#include<bits/stdc++.h>

#define Pi acos(-1.0)
#define U unsigned
#define ll long long
#define uu first
#define vv second
#define endl "\n"
#define scu(n) scanf("%u",&n)
#define scl(n) scanf("%d",&n)
#define scll(n) scanf("%lld",&n)

//Vector Macros
#define pb push_back
#define eb emplace_back
#define ALL(v) v.begin(),v.end()
#define UNIQUE(v) v.erase(unique(ALL(v)),v.end())
#define MIN(c) *min_element(ALL(c))
#define MAX(c) *max_element(ALL(c))
#define SUM(c) accumulate(ALL(c),0)

//Loop Macros
#define FOR(i,a,b) for(ll i=a;i<=b;i++)
#define rep(i,a,b)  for(int i=a;i<=b;i++)
#define For(i,n) for(int i=0;i<n;i++)

//Debug Macros
#define deb(a) cout << #a << " : " << a << " ";
#define debln(a) cout<< #a <<" : " << a << endl;
#define open  freopen("input.txt","r",stdin);
#define close freopen ("output.txt","w",stdout);

//Print Macros
#define print(v)  for(auto x : v) {  cout<<x<<" ";   }  cout<<endl;
#define PRINT(v)  for(auto x : v) { cout<<x.uu<<" "<<x.vv<<endl; }
#define _fastio  ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;

int node,edge,x,y;
vector<int>graph[11000];
int dist1[11000],dist2[11000];
bool vis[11000];

int bfs(int src,int dis[])
{
    memset(vis,0,sizeof(vis));

    queue<int>q;
    q.push(src);
    dis[src]=0;
    vis[src]=true;

    while(!q.empty())
    {
        int u = q.front();
        // deb(u)
        q.pop();

        For(i,graph[u].size())
        {
            int v = graph[u][i];
            if(vis[v]==0)
            {
                vis[v]=true;
                dis[v] = dis[u]+1;
                q.push(v);
            }
        }
    }

    int mx = 0,idx=0;
    for(int i=1; i<=node; i++)
    {
        if(mx<dis[i])
        {
            mx = dis[i];
            idx = i;
        }
    }

    return idx ;
}
int main()
{
    _fastio
    //open
    //close
    // printf("I Will Be a RED Coder By this year\n");

    scl(node);

    For(i,node-1)
    {
        scl(x);
        scl(y);
        graph[x].pb(y);
        graph[y].pb(x);
    }

    int mx_dis_idx = bfs(1,dist1);

    int final_dis_idx = bfs(mx_dis_idx, dist2 );

    printf("%d\n",dist2[final_dis_idx]);

    return 0;
}





