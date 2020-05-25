#include<bits/stdc++.h>
using namespace std;

#define ll long long int

ll f[10000000];
ll fibo(ll n)
{
    if(f[n]==0)
    {
        if(n<=1)
            f[n]=n;
        else
        {
            f[n]=fibo(n-1)+fibo(n-2);
        }
    }
    return f[n];
}

int main()
{
    ll n,i,j,x;
    cin>>n>>x;
    for(i=1; i<=n; i++)
        cout<<i<<" "<<fibo(i)%x<<endl;
}
