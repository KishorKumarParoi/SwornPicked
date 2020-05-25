//1-11-19
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
#define FOOR(a,b) for(ll i=a;i<=b;i++)
#define all(c) (c).begin(),(c).end()
#define open  freopen("input.txt","r",stdin)
#define close freopen ("output.txt","w",stdout)
#define fastio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define print(v)   for(auto x : v)  {cout<<x<<" ";}  cout<<endl;
#define PRINT(v)   for(auto x: v) {cout<<x.uu<<" "<<x.vv<<endl;}cout<<endl;
using namespace std;

set<int>st;
int n,q,x,y,k;

int main()
{
    // open;
    // close;
    // fastio

    scl(n);
    scl(q);
     
    For(i,q){
        
        scl(x);
        if(x==1){
            scl(k);
            st.insert(k);
        }
        
        if(x==2){
            
            scl(y);
            auto it=st.lower_bound(y);
            if(it==st.end())
            puts("-1");
            else
            printf("%d\n",*it);
        }
    }
            
    return 0;
}

