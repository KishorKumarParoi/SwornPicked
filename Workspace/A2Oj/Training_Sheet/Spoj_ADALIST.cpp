//4-12-19
#include<bits/stdc++.h>

#define Pi acos(-1.0)
#define ll unsigned long long
#define uu first
#define vv second
#define scl(n) scanf("%d",&n)
#define scll(n) scanf("%llu",&n)
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

ll n,q,qq,x,k;

int main()
{
    // open;
    // close;
    // fastio
    
    scll(n);
    scll(q);
    
   vector<ll>v;
    
    For(i,n){
        scll(x);
        v.eb(x);
    }
    
    //cout<<v.size()<<endl;
    //print(v);
    
    For(i,q){
        scll(qq);
        
        if(qq==1){
            
            scll(k);
            scll(x);
            k--;
            v.insert(v.begin()+k, x);
            //print(v);
            
        }
        
        
        if(qq==2){
            
            scll(k);
            k--;
            v.erase(v.begin()+k);
        }
        
        if(qq==3){
            
            scll(k);
            k--;
           auto it  = v.begin()+k;
           printf("%lld\n",*it);
        }
    }
    
    return 0;
}

