//26-11-19
#include<bits/stdc++.h>

#define Pi acos(-1.0)
#define ll long long
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
#define PRINT(v)   for(auto x : v)  {cout<<x.first<<" "<<x.second<<endl;}  cout<<endl;
#define uu first
#define vv second
#define print(v)   for(auto x: v) cout<<x<<" "; cout<<endl;
using namespace std;

int main()
{
    // open;
    // close;
    // fastio
    
  
    int n;
    scl(n);
    
    map<string,int>mp;
    //vector<pair<string,int> > v;
    
    string s;
    
    while(n--)
    {
        cin>>s;
        mp[s]++;
    }
 
     for(auto x: mp)
     {
        if(x.second>n){
            n=x.second;
            s=x.first;
        }
     }
     cout<<s<<endl;
    
    return 0;
}
