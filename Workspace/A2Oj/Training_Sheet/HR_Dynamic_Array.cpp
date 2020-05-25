//5-12-19
#include<bits/stdc++.h>

#define Pi acos(-1.0)
#define ll int
#define uu first
#define vv second
#define scl(n) scanf("%d",&n)
#define scll(n) scanf("%lld",&n)
#define pb push_back
#define eb emplace_back

#define For(i,n)  for(int i=0;i<n;i++)
#define FOR(i,n) for(ll i=0;i<n;i++)
#define FOOR(a,b) for(int i=a;i<=b;i++)
#define all(c) (c).begin(),(c).end()
#define open  freopen("input.txt","r",stdin)
#define close freopen ("output.txt","w",stdout)
#define fastio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define print(v)   for(auto x : v)  {cout<<x<<" ";}  cout<<endl;
#define PRINT(v)   for(auto x: v) {cout<<x.uu<<" "<<x.vv<<endl;}cout<<endl;
using namespace std;

vector<int>v[100005];

int main()
{
    // open;
    // close;
    // fastio
   
    int n,q;
    scl(n);
    scl(q);
    
    assert(n >= 1 && n <= 100000 && q >= 1 && q <= 100000);
    
    int last_ans=0;
    
    while(q--){
        
        int type,x,y;
        scl(type);
        scl(x);
        scl(y);
        
        assert(type >= 1 && type <= 2 && x >= 0 && x <= 1000000000 && y >= 0 && y <= 1000000000);
  
        
        if(type==1){
            
            v[(last_ans^x)%n].pb(y);
        }
        
        else{
            
            int pos = (last_ans^x)%n;
            int idx = y%((int)v[pos].size());
            last_ans = v[pos][idx];
            cout<<last_ans<<endl;
            
        }
    }    
   
    return 0;
}

