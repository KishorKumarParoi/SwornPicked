//27-11-19
#include<bits/stdc++.h>

#define Pi acos(-1.0)
#define ll long long
#define uu first
#define vv second
#define scl(n) scanf("%d",&n)
#define scll(n) scanf("%lld",&n)
#define pb push_back
#define eb emplace_back

#define For(i,n)  for(int i=0;i<n;i++)
#define FOR(i,n) for(ll i=0;i<n;i++)
#define FOOR(a,b) for(ll i=a;i<=b;i++)
#define all(c) (c).begin(),(c).end()
#define open  freopen("input.txt","r",stdin)
#define close freopen ("output.txt","w",stdout)
#define fastio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define print(v)   for(auto x : v)  {cout<<x<<" ";}  cout<<endl;
#define PRINT(v)   for(auto x: v) {cout<<x.uu<<" "<<x.vv<<endl;}cout<<endl;
using namespace std;

const int maxn = 150005;

struct Node{
    
    int index;
    int ID;
    int mount;   
}node[maxn];

int N;

bool cmp(Node &a, Node &b)
{
    if(a.mount != b.mount)
    {
        return a.mount>b.mount;
    }
    else
    {
        return a.index<b.index;
    }
}



int main()
{
    // open;
    // close;
    // fastio
    
    scl(N);
    For(i,N){
        
        scl(node[i].ID);
        scl(node[i].mount);
        
        node[i].index = i;
    }
    
    sort(node,node+N, cmp);
    
    For(i,N){
        
        printf("%d %d\n",node[i].ID,node[i].mount);
    }
    
    
    return 0;
}

