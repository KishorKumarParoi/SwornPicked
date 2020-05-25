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
vector<int>graph[100010];
bool vis[100010];

void bfs(int src)
{
    queue<int>q;
    q.push(src);
    vis[src]=true;

    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        For(i,graph[u].size())
        {
            int v = graph[u][i];
            if(vis[v]==0)
            {
                vis[v]=true;
                q.push(v);
            }
        }

    }
}
int main()
{
    _fastio
    //open
    //close
    // printf("I Will Be a RED Coder By this year\n");

    int tc;
    scl(tc);

    while(tc--)
    {
        scl(node);
        scl(edge);

        For(i,edge)
        {
            scl(x);
            scl(y);
            graph[x].pb(y);
            graph[y].pb(x);
        }

        int cnt=0;
        for(int i=0; i<node; i++)
        {
            if(vis[i]==0)
            {
                bfs(i);
                cnt++;
            }
        }


        printf("%d\n",cnt);

        For(i,100010)
        {
            vis[i]=0;
            graph[i].clear();
        }
    }

    return 0;
}






