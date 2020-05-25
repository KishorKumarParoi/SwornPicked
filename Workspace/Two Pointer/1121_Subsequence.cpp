//26-09-19 9.13am
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define sc(n) scanf("%lld",&n)

vector<ll>v;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    ll N,S,kase=1;
    while(scanf("%lld%lld",&N,&S)!=EOF)
    {
        v.clear();
        for(ll i=0; i<N; i++)
        {
            ll x;
            sc(x);
            v.push_back(x);
        }
        //sort(v.begin(),v.end());
        vector<ll>v1;
        v1=v;
       ll lo,hi;
       lo=0;
       hi=low+1;
       if(v[lo]+v1[hi]<S)
       {
           hi++;

       }
    }
    return 0;
}

