//27-11-19
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

class team{
    
    public:
    string id;
    int n;
};

bool cmp(const team &t1, const team &t2)
{
    return t1.n>t2.n;
}

int main()
{
    // open;
    // close;
    // fastio
    
    int t;
    scl(t);
    vector<team>v;
      
    while(t--){
        
        string tmp;
        int num;
        cin>>tmp>>num;
        
        team t;
        t.id=tmp;
        t.n=num;
        
        v.push_back(t);
    }
    
    stable_sort(v.begin(),v.end(),cmp);
    
    For(i,v.size())
    {
        cout<<v[i].id<<" "<<v[i].n<<endl;
    }
    cout<<endl;
    
    return 0;
}


