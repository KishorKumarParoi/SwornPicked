//9-09-19 11.12pm
#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
//vector<ull>v[1001001];
ull a,b,n,kishor;
ull f[10000100];
void fibo_Cycle()
{
    f[0]=0;
    f[1]=1;
    for(int i=2; i<=n*n; i++)
    {
        f[i]=(f[i-1]+f[i-2])%10;
        if(f[i]==f[1] && f[i-1]==f[0])
        {
            kishor=i-1;
            // v[n].push_back(i);
            break;
        }
    }
}
int bigmod(ull a,ull b,ull mod)
{
    if(b==0)
        return 1;
    if(b==1)
        return a%mod;
    if(b%2)
    {
        return ((a%mod) * (bigmod(a,b-1,mod)%mod))%mod;
    }
    if(b%2==0)
    {
        ull ret=bigmod(a,b/2,mod);
        return ((ret%mod)*(ret%mod))%mod    ;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        fibo_Cycle();
        //cout<<mod<<endl;
        for(int i=0;i<=n;i++)
        {
            cout<<f[i]<<" ";
        }
        int x = bigmod(a%kishor,b,kishor);
        cout<<f[x]<<endl;
    }
}

