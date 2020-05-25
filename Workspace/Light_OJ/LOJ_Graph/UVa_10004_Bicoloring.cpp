//4-2-20
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

vector<int>graph[222];
vector<bool>vis(222),color(222);

bool bicolor(int src)
{
    vis[src]=true;                  //white=0   black=1
    color[src]=0;

    queue<int>q;
    q.push(src);

    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        For(i,graph[u].size())
        {
            int v = graph[u][i];

            if(vis[v])
            {
                if(color[v]==color[u])
                    return false;
                continue;
            }
            vis[v] = true;
            if(color[u])
                color[v]=0;
            else
                color[v]=1;

            q.push(v);
        }
    }
    return true;
}
int main()
{
    _fastio
    //open
    //close
    //printf("I Will Be a RED Coder By this year\n");

    while(1)
    {
        int node,edge,x,y;
        scl(node);

        if(node==0)
            return 0;

        scl(edge);

        For(i,edge)
        {
            scl(x);
            scl(y);
            graph[x].pb(y);
            graph[y].pb(x);
        }

        bool flag = false;

        For(i,node)
        {
            if(vis[i])
                continue;
            if(!bicolor(i))
            {
                flag = true;
                break;
            }
        }


        if(flag)
            printf("NOT BICOLORABLE.\n");
        else
            printf("BICOLORABLE.\n");


        For(i,222)
        {
            graph[i].clear();
            vis[i]=0;
            color[i]=0;
        }
    }

    return 0;
}



