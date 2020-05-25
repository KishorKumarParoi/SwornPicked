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

int main()
{
    // open;
    // close;
    // fastio
    
    int y,w;
    scl(y);
    scl(w);
    
    int x , dot;
    
    x = max(y,w);
    dot = 7-x;
    
    int kk=6;
    //double ans = dot/6;
    //cout<<ans<<endl;
    
    if(dot%2==0){
        
        dot/=2;
        kk/=2;
    }
    
    if(dot%3==0){
        
        dot/=3;
        kk/=3;
    }
    
  
    cout<<dot<<"/"<<kk<<endl;
    
    return 0;
}

