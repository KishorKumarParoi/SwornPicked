//10-08-19 9.44am
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll ara[10002],a,b,c,d,e,f,m,n,i;

int main()
{
    int t,kase=1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld%lld%lld%lld%lld%lld%lld",&ara[0],&ara[1],&ara[2],&ara[3],&ara[4],&ara[5],&n);
        for(m=6; m<=n; m++)
        {
            ara[m]=(ara[m-1]+ara[m-2]+ara[m-3]+ara[m-4]+ara[m-5]+ara[m-6])%10000007;
        }
        printf("Case %d: %lld\n",kase++,ara[n]%10000007);
    }
}
