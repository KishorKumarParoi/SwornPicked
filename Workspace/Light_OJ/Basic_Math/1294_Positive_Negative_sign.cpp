//6-10-19 2.55pm
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int kase=1,t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll x=n/(2*m);
        printf("Case %d: %d\n",kase++,x*m*m);
    }
    return 0;
}
