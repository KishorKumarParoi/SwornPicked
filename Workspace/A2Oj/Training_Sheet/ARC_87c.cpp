//1-11-19
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
    
    map<int,int>mp;
    int n;
    scl(n);
    For(i,n){
        
        int x;
        scl(x);
        mp[x]++;
    }
    
    //PRINT(mp);
    
    int kk=n;
    
    for(auto x: mp){
        
        if(x.first>x.second){
            
            kk-=x.second;
           // cout<<x.second<<" "<<kk<<endl;
        }
        else{
            
            kk-=(x.second-x.first);
            //cout<<x.first<<" "<<x.second<<" "<<kk<<endl;
        }
    }
    
    cout<<n-kk<<endl;
    return 0;
}

