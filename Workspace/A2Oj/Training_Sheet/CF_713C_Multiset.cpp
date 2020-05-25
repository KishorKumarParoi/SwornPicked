//3-12-19
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
    
    ll n,x;
    scll(n);
    ll a[n+2];
    
    multiset<ll>st;
    
    FOOR(1,n){
        
        scll(x);
        x-=i;
        a[i]=x;
    }
    
    ll ans=0;
    
    FOOR(1,n){
        
        st.insert(a[i]);
        
        if(st.size() && a[i] < *st.rbegin()){
        
          //cout<<a[i]<<" "<<*st.rbegin()<<endl;
            
          ans+=*st.rbegin()-a[i];
          
         // cout<<"ans = "<<ans<<endl;
          
          st.erase(--st.end());
          st.insert(a[i]);      
          
          //print(st);  
        }
    }
    
    cout<<ans<<endl;
   // print(st);
    
   
    return 0;
}

