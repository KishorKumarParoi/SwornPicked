//24-11-19
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define scll(n) scanf("%lld",&n)
#define pll pair<ll,ll>

int main()
{
    ll t;
    scll(t);
    while(t--)
    {
        set<pll> st;
        ll n,ans,i,j,k;
        scll(n);

        for(i=0; i<n; i++)
        {
            ll a,b;
            scll(a);
            scll(b);
            pll x = make_pair(a,b);

            st.insert(x);
        }

        ll x,y;
        auto it = st.begin();
        x=it->second;
        auto it1=st.rbegin();
        y=it1->first;

        if(st.size()<2)
            cout<<0<<endl;
        else
            cout<<y-x<<endl;
    }

    return 0;
}
