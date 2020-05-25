#include<bits/stdc++.h>
using namespace std;
#define ll long long int

vector<ll>prime;
bool Status[1000002];
ll i,j,cnt,kase=1;

void sieve()
{
    memset(Status,0,sizeof(Status));

    for(i=2; i<=1000000; i++)
    {
        if(Status[i]==0)
        {
            prime.push_back(i);
            for(j=i*i; j<=1000000; j+=i)
                Status[j]=1;
        }
    }
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        sieve();
        ll a,b;
        cin>>a>>b;
        int cnt_a;
        for(i=0; prime[i]*prime[i]<=a; i++)
        {
            cnt_a=0;
            while(a%prime[i]==0)
            {
                cnt_a++;
                a/=prime[i];
                cout<<a<<" "<<cnt_a<<endl;
            }
        }

        cnt_a*=2;
        int cnt_b;
        for(i=0; prime[i]*prime[i]<=b; i++)
        {
            cnt_b=0;
            while(b%prime[i]==0)
            {
                cnt_b++;
                b/=prime[i];
                cout<<b<<" "<<cnt_b<<endl;
            }
        }
        cnt_b*=2;
        cout<<cnt_a<<" "<<cnt_b<< " ";
        cout<<min(cnt_a,cnt_b)<<endl;
    }
}
