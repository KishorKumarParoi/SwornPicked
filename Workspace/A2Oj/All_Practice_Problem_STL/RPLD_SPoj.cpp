//22-11-19
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
#define _fastio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

int main()
{
    // open;
    //close;
    _fastio;

    int t,n,r;

    scl(t);
    int kase=1;
    while(t--)
    {
        scl(n);
        scl(r);
        map<int, set<int> >mp;

        set<int>st;
        int x=0;
        For(i,n)
        {
            int S,sub;
            scl(S);
            scl(sub);
            st.insert(sub);
            mp[S]=st;

        }

        printf("Scenario #%d: ",kase++);
        cout<< (x>0 ? "impossible" : "possible")<<endl;

        for(auto x: mp)
        {

        }
    }
    return 0;
}


