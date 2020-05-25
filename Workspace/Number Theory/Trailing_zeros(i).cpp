//19-09-19 9.25am
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
vector<ll>prime;
bool Status[1100002];
ll i,j,kase=1,cnt;

void sieve()
{
    memset(Status,0,sizeof(Status));

    for(i=2; i<=1000000; i++)
    {
        if(Status[i]==0)
        {
            prime.push_back(i);
            for(j=i*i; j<=1000000; j+=2*i)
                Status[j]=1;
        }
    }
}


int main()
{
    //freopen("input.txt","r",stdin);
   //freopen("output.txt","w",stdout);
    ll t,n,ans;
    cin>>t;
    sieve();
    while(t--)
    {
        cin>>n;
        ans=1;
        for(i=0; prime[i]*prime[i]<=n; i++)
        {
            cnt=0;
            while(n%prime[i]==0)
            {
                cnt++;
                n/=prime[i];
            }
            ans*=(cnt+1);
            prime.clear();
        }
        if(n!=1)
            ans*=2;

        cout<<"Case "<<kase++<<": "<<ans-1<<endl;
    }
    return 0;
}
