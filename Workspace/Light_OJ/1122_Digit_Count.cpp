#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int m,n,a[12];
ll ans[12][11];
ll getcount(int i,int x)
{
    ll cnt=0;
    if(ans[i][x]!=-1)
        return ans[i][x];
    if(i==n)
        return 1;
    for(int j =0; j<m; j++)
    {
        if(x==0 || (abs(a[j]-x)<=2))
            cnt+=getcount(i+1,a[j]);
    }
    ans[i][x]=cnt;
    return cnt;
}
int main()
{
    int t,kase=1;
    cin>>t;
    while(t--)
    {
        memset(ans,-1,sizeof(ans));
        cin>>m;
        cin>>n;
        for(int i=0; i<m; i++)
            cin>>a[i];
        printf("Case %d: %lld\n",kase++, getcount(0, 0));
    }
    return 0;
}

