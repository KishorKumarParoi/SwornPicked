//11-09-19 4.05pm
#include<bits/stdc++.h>
#define ll long long int

ll mod;
ll a,b,n,m;
using namespace std;

void multiply(ll F[2][2],ll M[2][2],ll mod)
{
    ll x=(F[0][0]*M[0][0] + F[0][1]*M[1][0])%mod;
    ll y=(F[0][0]*M[0][1] + F[0][1]*M[1][1])%mod;
    ll z=(F[1][0]*M[0][0] + F[1][1]*M[1][0])%mod;
    ll w=(F[1][0]*M[0][1] + F[1][1]*M[1][1])%mod;
    F[0][0]=x;
    F[0][1]=y;
    F[1][0]=z;
    F[1][1]=w;
}

void power(ll F[2][2],ll n,ll mod)
{
    ll M[2][2]= {{1,1},{1,0}};
    if(n==0 || n==1 )
        return ;
    power(F,n/2,mod);
    multiply(F,F,mod);
    if(n%2!=0)
        multiply(F,M,mod);
}

ll fibo(ll n,ll mod)
{
    ll F[2][2]= {{1,1},{1,0}};
    power(F,n-1,mod);
    return (F[0][0])*b + (F[0][1])*a;
}
int main()
{
    int t,kase=1;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>n>>m;
        printf("Case %d: ",kase++);
        mod=1;
        for(ll i=1; i<=m; i++)
            mod*=10;

        if(n<3)
        {
            if(n==0)
                cout<<a<<endl;
            if(n==1)
                cout<<b<<endl;
            if(n==2)
                cout<<(a+b)%mod<<endl;
        }
        else
        {
            int ans=fibo(n,mod);
            ans%=mod;
            cout<<ans<<endl;
        }
    }
}
