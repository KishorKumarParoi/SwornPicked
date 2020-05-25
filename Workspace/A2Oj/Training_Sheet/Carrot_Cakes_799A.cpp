//28-11-19
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
    
    int n,t1,t2,d;
    cin>>n>>t1>>d>>t2;
    
   int x=0,y=0;
   
   int t=t1+t2;
    
    for(int i=1,j=1;;i++,j++){
        
        if(i%t1==0){
            
            x+=d;
            y+=d;
        }
        
        if(x>=y && x>=n){
            
            puts("NO");
            return 0;
        }
        
        if(j>=t && (j-t)%t1==0){
            
            y+=d;
        }
       
       //cout<<x<<" "<<y<<endl;
        
        if(x>=y && x>=n ){
            
            puts("NO");
            return 0;
        }
        else if(y>x && y>=n){
            
            puts("YES");
            return 0;
        }
          
    }
    
    return 0;
}

