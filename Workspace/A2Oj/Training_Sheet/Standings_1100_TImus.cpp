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

using namespace std;

int main()
{
    // open;
    // close;
    // fastio
    
    ll t,id,x;
    scll(t);
    
    vector<pair< ll,ll> >v(t);
    
    For(i,t)
    {
      cin>>v[i].second>>v[i].first;
    }
    
    sort(v.rbegin(),v.rend());
    
    for(auto &x:v)
    cout<<x.second<<" "<<x.first<<endl; 
    cout<<endl;
    return 0;
}
