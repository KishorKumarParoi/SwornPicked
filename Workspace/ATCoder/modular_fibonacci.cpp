//11-09-19 2.17pm
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
ll n,m;

void multiply(ll F[2][2],ll M[2][2])
{
    ll x=(F[0][0]*M[0][0] + F[0][1]*M[1][0])%(1<<m);
    ll y=(F[0][0]*M[0][1] + F[0][1]*M[1][1])%(1<<m);
    ll z=(F[1][0]*M[0][0] + F[1][1]*M[1][0])%(1<<m);
    ll w=(F[1][0]*M[0][1] + F[1][1]*M[1][1])%(1<<m);
    F[0][0]=x;
    F[0][1]=y;
    F[1][0]=z;
    F[1][1]=w;
}

void power(ll F[2][2],ll n)
{
    ll M[2][2]= {{1,1},{1,0}};
    if(n==0 || n==1 )
        return ;
    power(F,n/2);
    multiply(F,F);
    if(n%2!=0)
        multiply(F,M);
}
ll fibo(ll n)
{
    if(n==0)
        return 0;
    ll F[2][2]= {{1,1},{1,0}};
    power(F,n-1);
    return F[0][0]%(1<<m);
}
int main()
{
    while(cin>>n>>m)
    {
        cout<<fibo(n)<<endl;
    }
}

