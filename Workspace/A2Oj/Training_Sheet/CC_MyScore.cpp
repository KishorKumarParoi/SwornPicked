//7-12-19
#include<bits/stdc++.h>

#define Pi acos(-1.0)
#define ll unsigned int
#define scl(n) scanf("%d",&n)
#define scll(n) scanf("%u",&n)
#define pb push_back
#define eb emplace_back
#define uu first
#define vv second

#define For(i,n)  for(int i=0;i<n;i++)
#define FOR(i,n) for(ll i=0;i<n;i++)
#define FOOR(a,b) for(ll i=a;i<=b;i++)
#define all(c) (c).begin(),(c).end()
#define open  freopen("input.txt","r",stdin)
#define close freopen ("output.txt","w",stdout)
#define fastio ios::sync_with_stdio(false);cin.tie(NULL);
#define PRINT(v)   for(auto x : v) { {cout<<x<<" ";}  cout<<endl;}
using namespace std;

int main()
{
    // open;
    // close;
    // fastio
    
    ll t,n,x,p;
    
    scll(t);
    while(t--){
        
        scll(n);
        
        map<ll,ll>mp;
        
        ll sum=0;
        
        For(i,n){
            
            scll(x);  
            scll(p);
            
           if(x<9){
               
               if(mp[x]< p){
                   mp[x]=p;
               }
           }
          
        }
        
        
        for(auto it : mp)
        sum+=it.vv;
    
       printf("%u\n",sum);
      
    }
      
    return 0;
}
