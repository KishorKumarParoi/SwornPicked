//09-08-19 1.26pm
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll m,n;
    int t,kase=1;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        printf("Case %d: %lld\n",kase++,(m*n)/2);
    }
    return 0;
}
