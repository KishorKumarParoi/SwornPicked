#include<bits/stdc++.h>
using namespace std;
#define mod 10
#define ll long long int
vector<ll>v;

void multiply(ll F[2][2],ll M[2][2])
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
void power(ll F[2][2],ll n)
{
    if(n==0 || n==1)
        return ;
    ll M[2][2]= {{1,1},{1,0}};
    power(F,n/2);
    multiply(F,F);
    if(n%2)
        multiply(F,M);
}
ll fib(ll n)
{
    if(n==0)
        return 0;
    ll F[2][2]= {{1,1},{1,0}};
    power(F,n-1);
    return F[0][0]%mod;
}

ll binary(ll n)
{
    string s;
    ll cnt=0;
    while(n>0)
    {
        s+=(n%2==0) ? "0" : "1" ;
        n/=2;
        cnt++;
    }
    reverse(s.begin(),s.end());
    //cout<<s<<" "<<cnt<<endl;
    return (1ll<<(cnt-1));
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        for(ll i=0; i<60; i++)
        {
            // cout<<fib(i)<< " ";
            v.push_back(fib(i));
        }
        //cout<<endl;
        ll x=binary(n);
        //cout<<x<<endl;
        ll y=x%60;
        cout<<fib(y-1)<<endl;
        //cout<<v[x]<<" "<<v[x-1]<<endl;
    }
    return 0;
}
