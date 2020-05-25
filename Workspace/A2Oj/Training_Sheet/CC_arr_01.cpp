//9-12-19
#include<bits/stdc++.h>

#define Pi acos(-1.0)
#define ll long long int 
#define uu first
#define vv second
#define scl(n) scanf("%lld",&n)
#define scll(n) scanf("%llu",&n)

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
#define For(i,n) for(ll i=0;i<n;i++)

//Debug Macros
#define deb(a) cout << #a << " : " << a << " ";
#define debln(a) cout<< #a <<" : " << a << endl;
#define open  freopen("input.txt","r",stdin);
#define close freopen ("output.txt","w",stdout);

//Print Macros
#define print(v)  for(auto x : v) {  cout<<x<<" ";   }  cout<<endl;
#define PRINT(v)  for(auto x : v) { cout<<x.uu<<" "<<x.vv<<endl; }

using namespace std;

ll t,n,c,sum;

int main()
{
    
    scl(t);
    
    while(t--){
        
        scl(n);
        scl(c);
        
        sum=0;
        
        vector<ll>v(n);
        
        For(i,n){
             cin>>v[i];
             c-=v[i];
        }
        
        //cout<<sum<<" "<<c<<endl;
        puts(c > 0 ? "Yes" : "No");
    }
            
    return 0;
}



