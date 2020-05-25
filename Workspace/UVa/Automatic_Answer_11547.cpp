#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,m,n,ans,temp,r;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        n*=567;
        n/=9;
        n+=7492;
        n*=235;
        n/=47;
        n-=498;
        n=abs(n);
        n/=10;
        n%=10;
        printf("%lld\n",n);

    }
    return 0;
}
