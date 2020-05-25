//5-12-19
#include<bits/stdc++.h>

#define Pi acos(-1.0)
#define ll long long
#define uu first
#define vv second
#define scl(n) scanf("%d",&n)
#define scll(n) scanf("%lld",&n)
#define pb push_back
#define eb emplace_back

#define For(i,n)  for(ll i=0;i<n;i++)
#define FOR(i,n) for(ll i=0;i<n;i++)
#define FOOR(a,b) for(int i=a;i<=b;i++)
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
   
   ll n,m;
   scll(n);
   scll(m);
   
   vector<ll>v;
   
   For(i,n)
   v.pb(0);
  
  For(i,m){
      
      ll a,b,k;
      scll(a);
      scll(b);
      scll(k);
     
      v[a-1]+=k;
      v[b]-=k;   
      
  }
   
   
   FOOR(1,n-1){
       
       v[i]+=v[i-1];
   }
   
   sort(all(v));
   //print(v);
   
   cout<<v[n-1]<<endl;
    return 0;
}

