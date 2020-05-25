#include<bits/stdc++.h>
#define ll long long int
ll m=1000003;
ll f[1000005];
using namespace std;
ll mod(ll b,ll p)
{
    if(p==1)
        return b;
    if(p%2==1)
        return (mod(b,p-1)*b)%m;
    else
    {
        long long res=mod(b,p/2);
        return (res*res)%m;
    }
}
int main()
{
    long long t,n,r,s,res,no=0;
    cin>>t;
    f[1]=1;
    for(long i=2;i<1000001;i++)
    f[i]=(i*f[i-1])%m;
    while(t--)
    {
        cin>>n>>r;
            if(n<r)
            {
                 printf("Case %d: 0\n",++no);
                 continue;
            }
            else if(n==r||r==0)
            {
                printf("Case %d: 1\n",++no);
                continue;
            }
        s=((f[n-r]%m)*(f[r]%m))%m;
        printf("Case %lld: %lld\n",++no,(f[n]*mod(s,m-2))%m);

    }
    return 0;
}
