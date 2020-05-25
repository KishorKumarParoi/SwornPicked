//5-12-19
#include<bits/stdc++.h>

#define Pi acos(-1.0)
#define ll long long
#define uu first
#define vv second
#define scll(n) scanf("%lld",&n)
#define pb push_back
#define eb emplace_back

#define For(i,n)  for(ll i=0;i<n;i++)
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
 
    ll n,k,a,b,m;
    scl(n);
    scl(m);
    
    vector<ll>v(n)={0};
        
    For(i,m){
        
        scl(a);
        scl(b);
        scl(k);
        a--;
        
        v[a]+=k;
        v[b]-=k;
    }
    
    print(v);
    
    For(i,n)
    v[i]+=v[i-1];
    
    sort(all(v));
    
    cout<<v[n-1]<<endl;
    
    return 0;
}

