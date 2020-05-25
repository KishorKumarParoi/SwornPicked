#include<bits/stdc++.h>
#include<algorithm>
#define ll long long int

using namespace std;

bool Status[1000000];
ll prime[500020];
void siv()
{
    ll N =100000000;
    //int i,j,sq= (int)sqrt(N);
    prime[1]=2;
    for(ll i=4; i<=N; i+=2)
        Status[i]=1;
    for(ll i=3; i<=N; i+=2)
    {
        if(Status[i]==0)
        {
            for(ll j=i*i; j<=N; j+=i)
            {
                Status[j]=1;
            }
        }
    }
    Status[1]=1;
    int z=2;
    for(ll i=3; i<=N; i+=2)
    {
        if(Status[i]==0)
        {
            prime[z]=i;
            z++;
        }
    }
}
int main()
{
    siv();
    ll t,n;
    scanf("%lld",&n);
    printf("%lld\n",prime[n]);
    return 0;
}
