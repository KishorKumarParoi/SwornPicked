//7-12-19
#include<bits/stdc++.h>

#define Pi acos(-1.0)
#define ll long long
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
#define PRINT(v)   for(auto x : v) { {cout<<x<<" ";}  cout<<endl;}
using namespace std;



int main()
{
    // open;
    // close;
    // fastio
    
    ll n;
    scll(n);
    
    vector<ll>q(n-1),p(n);
    
    ll sum=0;
    ll min_val=0;
    
    For(i,n-1){
        
        cin>>q[i];
        sum+=q[i];
        if(sum<min_val)
        min_val=sum;
    }
        
    p[0]=1-min_val;
    
    For(i,n-1){
        
        p[i+1]=p[i]+q[i];
    }
    
    bool ok=true;
    
    For(i,n){
        
        if(p[i]<1 || p[i]>n)
        ok=false;
    }
    
    if(!ok){
        
        puts("-1");
        return 0;
        
    }
    set<ll>st(all(p));
    
    //cout<<st.size()<<endl;
   
    ok=(st.size()==n);
    
    if(ok){
    
        For(i,n)
        cout<<p[i]<<" ";
        cout<<endl;
        
    }
    
    else{
        
        puts("-1");
    }
    
    return 0;
}

