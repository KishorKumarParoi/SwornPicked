//8-12-19
#include<bits/stdc++.h>

#define Pi acos(-1.0)
#define ll long long
#define uu first
#define vv second
#define scl(n) scanf("%d",&n)
#define scll(n) scanf("%lld",&n)

//Vector Macros
#define pb push_back
#define eb emplace_back
#define ALL(v) v.begin(),v.end()
#define UNIQUE(v) v.erase(unique(ALL(v)),v.end())
#define MIN(c) *min_element(ALL(c))
#define MAX(c) *max_element(ALL(c))
#define SUM(c) accumulate(ALL(c),0)

//Loop Macros
#define FOR(i,a,b) for(ll i=a;i<=b;i++)
#define rep(i,a,b)  for(int i=a;i<=b;i++)
#define For(i,n) for(int i=0;i<n;i++)

//Debug Macros
#define deb(a) cout << #a << " : " << a << " ";
#define debln(a) cout<< #a <<" : " << a << endl;
#define open  freopen("input.txt","r",stdin);
#define close freopen ("output.txt","w",stdout);

#define fastio ios::sync_with_stdio(false);cin.tie(nullptr);

//Print Macros
#define print(v)  for(auto x : v) {  cout<<x<<" ";   }  cout<<endl;
#define PRINT(v)  for(auto x : v) { cout<<x.uu<<" "<<x.vv<<endl; }

using namespace std;

int n,x,t;

int main()
{
    //open
    //close
    //fastio
    
    scl(t);
    
    while(t--){
        scl(n);
        
       int a[n+10];
       
       int cnt_zero=0,cnt_2=0;
       
       For(i,n){
           cin>>a[i];
           if(a[i]==2)
           cnt_2++;
           if(a[i]==0)
           cnt_zero++;
       }
       
       int ans=0;
       
       for(int i=1;i<cnt_2;i++)
       ans+=i;
       
       for(int i=1;i<cnt_zero;i++)
       ans+=i;
       
       cout<<ans<<endl;
       
    }
            
    return 0;
}


