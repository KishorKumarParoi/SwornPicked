#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll bigmod(ll a,ll b,ll M)
{
    if(b==0)return 1;
    if(b%2==0)
    {
        ll ret=bigmod(a,b/2,M);
        return ((ret%M)*(ret%M))%M;
    }
    else
    {
        return ((a%M)*(bigmod(a,b-1,M)%M))%M;
    }
}
int main()
{
    ll b,p,m;
    while(cin>>b>>p>>m)
    cout<<bigmod(b,p,m)<<endl;
}

