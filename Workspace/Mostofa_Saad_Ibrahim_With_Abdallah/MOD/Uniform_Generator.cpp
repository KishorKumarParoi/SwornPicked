//9-3-20
#include<bits/stdc++.h>

#define Pi acos(-1.0)
#define U unsigned
#define ll long long
#define uu first
#define vv second
#define endl "\n"
#define scu(n) scanf("%u",&n)
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
#define For(i,n) for(ll i=0;i<n;i++)

//Debug Macros
#define deb(a) cout << #a << " : " << a << " ";
#define debln(a) cout<< #a <<" : " << a << endl;
#define open  freopen("input.txt","r",stdin);
#define close freopen ("output.txt","w",stdout);

//Print Macros
#define print(v)  for(auto x : v) {  cout<<x<<" ";   }  cout<<endl;
#define PRINT(v)  for(auto x : v) { cout<<x.uu<<" "<<x.vv<<endl; }
#define _fastio  ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{
    int step,mod;

    while(cin>>step>>mod)
    {
        int seed=0,i,kkp,pre;
        int dp[100010];

        dp[0] = (seed+step)%mod;
        pre = dp[0];

        i=1;
        while(true)
        {
            dp[i] = (dp[i-1] + step)%mod;
            if(dp[i]==pre)
                break;
            i++;
        }
        if(i == mod)
        {
            printf("%10d%10d    Good Choice\n\n",step,mod);

        }
        else
        {
            printf("%10d%10d    Bad Choice\n\n",step,mod);
        }
    }
}
