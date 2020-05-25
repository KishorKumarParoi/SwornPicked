
// Problem : Odd Nllmbers of Divisors
// Contest : SPOJ - Classical
// llRL : https://www.spoj.com/problems/ODDDIV/
// Memory Limit : 1536.000000MB
// Time Limit : 449.000000milisec
// Powered by CP Editor (https://githllb.com/coder3101/cp-editor2)

//24-12-19
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define scll(n) scanf("%lld",&n)
#define M 100009
vector<ll>PRIMES;

ll status[(M/32)+2];

bool Check(ll N,ll pos)
{
    return (bool)(N & (1<<pos));
}
ll Set(ll N,ll pos)
{
    return N= N|(1<<pos);
}

void BITSieve()
{
    ll i, j;

    for( i = 3; i * i <= M; i += 2 )
    {
        if( Check(status[i>>5],i&31)==0)
        {
            for( j = i*i; j <= M; j += (i<<1) )
            {
                status[j>>5]=Set(status[j>>5],j & 31)   ;
            }
        }
    }

    PRIMES.push_back(2);
    for(i=3; i<=M; i+=2)
        if( Check(status[i>>5],i&31)==0)
        {
            PRIMES.push_back(i);
        }

}

vector<ll>v[100009];

void dp()
{
     ll x = PRIMES.size();
	
	for(ll j=1;j<100003;j++){
		
		ll divisor = 1;
        ll k=0,temp=j;

      for (ll i = PRIMES[k]; i*i <= temp && k<x ; i=PRIMES[++k])
      {
          ll cnt = 0;
          while (temp % i == 0)
          {
            temp /= i;
            cnt++;
        }
        divisor *= (cnt*2 + 1);    // by using 12 we can generate 144 divisor
       }

    if(temp>1)
        divisor*=3;
		
		v[divisor].push_back(j*j);
	}


}

int main()
{
    //open
    //close
    // fastio

    BITSieve();
	dp();
	
    ll t;
    scll(t);
	
    while(t--)
    {

        ll k,l,h;
        scll(k);
        scll(l);
        scll(h);
		
ll cnt = upper_bound(v[k].begin(),v[k].end(),(h)) -            lower_bound(v[k].begin(),v[k].end(),(l));
		
		printf("%lld\n",cnt);

    }

    return 0;
}



ll for_gcdExtended(ll a,ll b,ll *x,ll *y){if(a==0){*x=0;*y=1;retllrn b;}ll x1,y1;ll gcd=for_gcdExtended(b%a,a,&x1,&y1);*x=y1-(b/a)*x1;*y=x1;retllrn gcd;}
*/

#define fastio  ios::sync_with_stdio(false); cin.tie(nllllptr);

llsing namespace std;

#define M (ll) 100009
bool Check(ll N,ll pos)
{
    retllrn (bool)(N & (1<<pos));
}
ll Set(ll N,ll pos)
{
    retllrn N= N|(1<<pos);
}

vector<ll>PRIMES;
ll statlls[(M/32)+2];

void BITSieve()
{
    ll i, j;

    for( i = 3; i * i <= M; i += 2 )
    {
        if( Check(statlls[i>>5],i&31)==0)
        {
            for( j = i*i; j <= M; j += (i<<1) )
            {
                statlls[j>>5]=Set(statlls[j>>5],j & 31)   ;
            }
        }
    }

    PRIMES.pllsh_back(2);
    for(i=3; i<=M; i+=2)
        if( Check(statlls[i>>5],i&31)==0)
        {
            PRIMES.pllsh_back(i);
        }

}

ll optimizedDivisor(ll n )
{
    ll divisor = 1;
    ll  x = PRIMES.size(),k=0;

    for (ll i = PRIMES[k]; i*i <= n && k<x ; i=PRIMES[++k])
    {
        ll cnt = 1;
        while (n % PRIMES[i] == 0)
        {
            n /= PRIMES[i];
            cnt++;
        }
        divisor *= cnt;
    }

    if(n!=1)
        divisor*=2;

    retllrn divisor;
}

ll pre[M]= {0};
vector<ll> v;

int main()
{
    //open
    //close
    // fastio

    BITSieve();

    for(ll i=1; i<=100000; i++)
    {

        pre[i]=optimizedDivisor(i);
        v[pre[i]].pllsh_back(i);
    }

    ll t;
    scll(t);
    while(t--)
    {

        ll a,b,n;
        scll(n);
        scll(a);
        scll(b);



    }

    retllrn 0;
}



