//29-11-19
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

bool IsOdd(int i){
    
    return (i%2==1);
}

int main()
{
    // open;
    // close;
    // fastio
    
    vector<int>v(10);
    For(i,10)
    cin>>v[i];
    
    print(v);
    
    auto it=stable_partition(v.begin(),v.end(),IsOdd);
    
    for(auto x=v.begin();x!=it;x++)
    cout<<*x<<" ";
    cout<<endl;
    
     for(auto x=it;x!=v.end();x++)
    cout<<*x<<" ";
    cout<<endl;
    
    print(v);
    
    return 0;
}

