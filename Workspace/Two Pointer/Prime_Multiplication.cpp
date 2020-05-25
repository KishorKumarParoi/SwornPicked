#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mx 100007
#define sc(n) scanf("%lld",&n)

ll mod=1000000009;
vector<ll>prime;
bool Status[mx+2];
vector<ll>factor;
vector<ll>v;


void sieve()
{
    memset(Status,0,sizeof(Status));

    for(ll i=2; i<=mx; i++)
    {
        if(Status[i]==0)
        {
            prime.push_back(i);
            for(ll j=i*i; j<=mx; j+=(2*i))
            {
                Status[j]=1;
            }
        }
    }
}

void factorization(ll x)
{
    for(ll i=0; i<prime.size(); i++)
    {
        if(x%prime[i]==0)
        {
            x/=prime[i];
            factor.push_back(prime[i]);
        }

        if(x==1)
            break;
    }
}


ll divisor(ll n,ll fact)
{
    ll cnt=0,tmp;
    tmp=n;
    if(tmp%fact==0)
    {
        cnt=0;
        while(tmp%fact==0)
        {
            tmp/=fact;
            cnt++;
        }
    }
    return cnt;
}




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll x,n;
    sc(x);
    sc(n);
    sieve();
    factorization(x);
    ll ans=1;

    for(ll j=n; j>=1; j--)
    {
        for(ll i=0; i<factor.size(); i++)
        {
            ll num=factor[i];
            num%=mod;
            ll divi=divisor(j,num);
            divi%=mod;
            ll pwr=pow(num,divi);
            pwr%=mod;
            ans*=pwr;
            ans%=mod;
            //cout<<num<<" "<<j<<" "<<divi<<" "<<pwr<<" "<<ans<<endl;
        }
    }
    cout<<ans%mod<<endl;
}
