//09-08-19 10.54pm
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

vector<ll>dv;
unordered_map<ll,ll>cnt;
typedef pair<ll,ll>pii;
#define x first
#define y second

pii extendedEuclid(ll a,ll b)
{
    if(b==0)
        return pii(1,0);
    else
    {
        pii d=extendedEuclid(b,a%b);
        return pii(d.y,d.x-d.y*(a/b));
    }
}

ll modularInverse(ll a,ll m)
{
    pii ret=extendedEuclid(a,m);
    return ((ret.x %m)+m)%m;
}

ll fastpow(ll x,ll n)
{
    ll ret=1;
    x%=mod;
    while(n)
    {
        if(n&1)
            ret=(ret*x)%mod;
        x=(x*x)%mod;
        n>>=1;
    }
    return ret;
}

void factor(ll n)
{
    for(ll i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            ll counter=0;
            while(n%i==0)
            {
                n/=i;
                counter++;
            }
            dv.push_back(i);
            cnt[i]=counter;
        }
    }
    if(n>1)
    {
        dv.push_back(n);
        cnt[n]=1;
    }
}

int main()
{
    ll t,kase=1;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        printf("Case %lld: ",kase++);
        if(n==1)
        {
            printf("1\n");
            continue;
        }
        if(m==0)
        {
            cout<< "1\n";
            continue;
        }
        dv.clear();
        cnt.clear();
        factor(n);
        ll sum=1;
        for(ll i=0; i<dv.size(); i++)
        {
            ll tot=cnt[dv[i]]*m+1;
            ll lob=fastpow(dv[i],tot)-1;
            if(lob<0)
                lob=(lob+mod)%mod;
            ll hor=modularInverse(dv[i]-1,mod);
            sum=(sum*((lob*hor)%mod))%mod;
        }
        printf("%lld\n",sum);
    }
    return 0;
}
