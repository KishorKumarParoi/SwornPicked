/*#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll calc_func(ll N,ll x)
{
    ll cnt=0;
    while(N%x==0)
    {
        cnt++;
        N/=x;
    }
    return cnt;
}
ll fac(ll n)
{
    if(n<2)
        return 1;
    else
        return n*fac(n-1);
}
int main()
{
    ll t,kase=1,r,p,q,i,j,k,l,m,N,n,px,py,A,B;
    cin>>t;
    while(t--)
    {
        cin>>n>>r>>p>>q;
        i=calc_func(fac(n),2);
        k=calc_func(fac(r),2);
        m=calc_func(fac(n-r),2);
        px=(q*calc_func(p,2));


        j=calc_func(fac(n),5);
        l=calc_func(fac(r),5);
        N=calc_func(fac(n-r),5);
        py=(q*calc_func(p,5));
        A=i-k-m+px;
        B=j-l-N+py;
        ll ans=min(A,B);
        printf("Case %d: %d\n",kase++,ans);
    }
    return 0;
}
*/
//07-08-19 6.50pm
#include<bits/stdc++.h>
using namespace std;
int ntwos(int n)
{
    int cnt=0;
    int x=2;
    while(1)
    {
        int add=n/x;
       // cout<<" "<<add<<endl;
        if(add==0)
            break;
        cnt+=add;
        x*=2;
    }
    return cnt;
}
int nFives(int n)
{
    int cnt=0;
    int x=5;
    while(1)
    {
        int add=n/x;
        if(add==0)
            break;
        cnt+=add;
        x*=5;
    }
    return cnt;
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int kase=1; kase<=t; kase++)
    {
        int n,r,p,q;
        cin>>n>>r>>p>>q;
        r=max(r,n-r);
        //cout<<ntwos(n)<< " "<<nFives(n)<<endl;
        //cout<<ntwos(r)<< " "<<nFives(r)<<endl;
        //cout<<ntwos(n-r)<< " "<<nFives(n-r)<<endl;

        int tt = ntwos(n)-ntwos(r)-ntwos(n-r);
        int ff=nFives(n)-nFives(r)-nFives(n-r);
        int nT=0,nF=0;
        //cout<<tt<< " "<<ff<<endl;
        while(p%2==0)
        {
            p/=2;
            ++nT;
        }
        while(p%5==0)
        {
            p/=5;
            ++nF;
        }
        int ans=min(nT*q+tt,nF*q+ff);
        printf("Case %d: %d\n",kase,ans);
    }
    return 0;
}
