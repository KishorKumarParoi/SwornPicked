//10-08-19 10:57am
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int countOne(int n)
{
    int cnt=0;
    ll t;
    for(t=1; t<=n; t*=2)
    {
        if(n&(t))
            cnt++;
    }
    return cnt;
}
ll next(ll num)
{
    ll res,t;
    for(t=1; t<=num; t*=2)
    {
        if(num&(t))
        {
            res=num+t;
            break;
        }
    }
    //cout<<countOne(num)<< " "<<countOne(res)<<endl;
    int diff=countOne(num)-countOne(res);
    //cout<<res<<" "<<diff<<endl;
    int i;
    for(i=0; i<diff; i++)
    {
        res+=(1<<i);
        //cout<<"res = " <<res<<endl;
    }
    return res;
}

int main()
{
    int t,i,n,kase=1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        printf("Case %d: %lld\n",kase++,next(n));
    }
    return 0;
}
