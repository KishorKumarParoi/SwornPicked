#include<bits/stdc++.h>
using namespace std;
vector< vector<int> > v;

#define ll long long int

ll f[100];
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
    for(i=0; i<=n; i++)
        cout<<i<<" "<<fibo(i)<<" "<<fibo(i)%x<<endl;
}
