//09-08-19 9.35pm
#include<bits/stdc++.h>
#include<bitset>
#include<vector>

using namespace std;
#define ll long long int

vector<ll>primes;

void sieve()
{
    const ll RT = 1e7+3;
    bitset<RT>status;
    ll rt=sqrt(1.0*RT);
    for(ll i=3; i<=rt; i+=2)
    {
        if(!status[i])
            for(ll j=i*i; j<RT; j+=(i<<1))
                status[j]=true;
    }
    primes.push_back(2);
    for(ll i=3; i<RT; i+=2)
    {
        if(!status[i])
            primes.push_back(i);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cerr.tie(nullptr);
    sieve();
    ll t;
    cin>>t;
    ll kase=1;
    while(t--)
    {
        ll n;
        cin>>n;
        ll sz=primes.size();
        ll ans=1;
        for(ll i=0; i<sz; ++i)
        {
            int cnt=0;
            if(n<primes[i])
                break;
            while(n%primes[i]==0)
            {
                n/=primes[i];
                cnt++;
            }
            if(i!=0)
                ans*=(cnt+1);
            //   cout<<"ans_01 = "<<ans<<endl;
        }
        if(n!=1)
            ans*=2;
        // cout<<"ans_mid = "<<ans<<endl;
        // ans=ans/2+1;
        //cout<<"ans_final = "<<ans<<endl;
        printf("Case %lld: %lld\n",kase++,ans-1);
    }
}
