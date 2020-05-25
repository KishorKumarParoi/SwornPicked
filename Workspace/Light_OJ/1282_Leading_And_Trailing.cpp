//09-08-19 3.17pm
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll bigmod(ll base,ll power,ll mod)
{
    ll  ans=1;
    while(power)
    {
        if(power&1)
            ans=(ans*base)%mod;
        base=(base*base)%mod;
        power/=2;
    }
    return ans;
}
int main()
{
    ll cs,t,n,k;
    cin>>t;
    for(cs=1; cs<=t; cs++)
    {
        cin>>n>>k;
        double N=log10(1.0*n)*k;
       // cout<<N<<endl;
      //  cout<<floor(N)<<endl;
        N-=floor(N);
       // cout<<N<<endl;
        N=pow(10,N);
        //cout<<N<<endl;
        N*=100;
        //cout<<N<<endl;
        printf("Case %d: %03d %03d\n",cs,(int)N,bigmod(n%1000,k,1000));
    }
    return 0;
}
