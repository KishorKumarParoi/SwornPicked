//4-12-19
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
#define FOOR(a,b) for(int i=a;i<=b;i++)
#define all(c) (c).begin(),(c).end()
#define open  freopen("input.txt","r",stdin)
#define close freopen ("output.txt","w",stdout)
#define fastio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define print(v)   for(auto x : v)  {cout<<x<<" ";}  cout<<endl;
#define PRINT(v)   for(auto x: v) {cout<<x.uu<<" "<<x.vv<<endl;}cout<<endl;
using namespace std;


int fn(int ar[7][7]){
    
        int a[5][5];
        for(int i=0;i<=5;i++){
        
        for(int j=0;j<=5;j++){
            
            a[i-1][j-1] = ar[i][j]+ar[i+1][j]+ar[i+1][j-1]+ar[i+1][j+1]+ar[i-1][j]+ar[i-1][j-1]+ar[i-1][j+1];
         }
    }
    
    int mx=-100000;
    
    for(int i=0;i<=3;i++){
        for(int j=0;j<=3;j++){
            
            if(mx<a[i][j])
            mx=a[i][j];
        }
    }
    return mx;
    
}
int main()
{
    // open;
    // close;
    // fastio
    
    int ar[7][7];
    
    for(int i=0;i<=5;i++){
        for(int j=0;j<=5;j++){
            
            cin>>ar[i][j];
        }
    }
    
    
    int mx=fn(ar);
    cout<<mx<<endl;
    
    return 0;
}

