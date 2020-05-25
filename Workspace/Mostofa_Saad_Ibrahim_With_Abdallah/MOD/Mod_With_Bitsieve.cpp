// 14-03-19
#include<bits/stdc++.h>
#define MAX 65001
#define LL long long int

using namespace std;

int status[(MAX/32)+2];

bool check(int n, int pos)
{
    return (bool)(n & (1<<pos));
}
int SET(int n, int pos)
{
    return n=n|(1<<pos);
}

void sieve()
{
    int sqrtN= (sqrt(MAX));
    for(int i=3; i<=sqrtN; i=i+2)
    {
        if(check(status[i>>5],i&31)==0)
        {
            for(int j=i*i; j<=MAX; j= j + (i<<1))
            {
                status[j>>5]=SET(status[j>>5],j&31);
            }
        }
    }
}

LL bigmod(LL b, LL p, LL m)
{
    if(p==0)
        return 1;
    if(p%2==0)
    {
        LL x = bigmod(b,p/2,m);
        return (x%m * x%m)%m;
    }
    else
        return ((b%m)*bigmod(b,p-1,m)%m)%m;
}

ll bipow(ll a,ll b,ll m)
{
    a%=m;
    ll res = 1;

    while(b>0)
    {
        if(b&1)
            res = (res *a)%m;
        a = (a*a)%m;
        b>>=1;
    }
    return res;
}


int main()
{
    sieve();
    LL n;
    while(scanf("%lld",&n) && n)
    {
        if(check(status[n>>5], n&31)==0 )
        {
            printf("%lld is normal.\n",n);
            continue;
        }
        bool flag = true;
        for(int i=2; i<n; i++)
        {
            if(i!=bigmod(i,n,n))
            {
                flag = false;
                break;
            }
        }
        if(flag)
            printf("The number %lld is a Carmichael number.\n", n);
        else
        {
            printf("%lld is normal.\n",n);
        }
    }
    return 0;
}
