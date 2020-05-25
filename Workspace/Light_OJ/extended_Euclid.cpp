#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
ll extended_Euclid(ll a,ll b,ll &X,ll &Y)
{
    if(b==0)
    {
        X=1;
        Y=0;
        return a;
    }
    ll xx,yy;
    ll g = extended_Euclid(b,a%b,xx,yy);
    X=yy;
    Y=xx-yy*(a/b);
    return g;
}
int main()
{
    ll a,b,x,y;
    cin>>a>>b;
    ll gcd=extended_Euclid(a,b,x,y);
    cout<<x<<" "<<y<<" "<<gcd<<endl;
}
