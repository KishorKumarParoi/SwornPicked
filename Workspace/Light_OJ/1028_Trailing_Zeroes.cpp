//18-09-19 8.51pm
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll prime[1000000];
bool Status[1000002];
ll i,j,cnt,kase=1;
void sieve()
{
    memset(Status,0,sizeof(Status));
    for( i=4; i*i<=1000000; i+=2)
        Status[i]=1;
    for(i=3; i*i<=1000000; i+=2)
    {
        if(Status[i]==0)
        {
            for(j=i*i; j*j<=1000000; j+=(i*2))
                Status[j]=1;
        }
    }
    prime[0]=2;
    j=1;
    for(i=3; i<=1000000; i+=2)
    {
        if(Status[i]==0)
            prime[j++]=i;
    }
}

int main()
{
    ll t,n,ans;
    sieve();
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll cnt;
        ans=1;
        for(i =0; i<j && prime[i]*prime[i]<=n; i++)
        {
            cnt=0;
            while(n%prime[i]==0)
            {
                cnt++;
                n/=prime[i];
            }
            ans*=(cnt+1);
        }
        if(n!=1)
            ans*=2;
        cout<<"Case "<<kase++<<": "<<ans-1<<endl;
    }
}
