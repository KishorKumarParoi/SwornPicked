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
    
    ll n;
    scll(n);
    
    vector<ll>v(n);
    
    FOR(i,n)
    cin>>v[i];
    
    cout<< v[1]-v[0] << " "<<v[n-1]-v[0]<<endl;
    
    FOOR(1,n-2)
    {
       
       cout<<min(v[i+1]-v[i] , v[i]-v[i-1])<<" "<< max(v[n-1]-v[i] , v[i]-v[0])<<endl;
        
    }
    
    cout<<v[n-1]-v[n-2]<<" "<<v[n-1]-v[0]<<endl;
    
    return 0;
}

