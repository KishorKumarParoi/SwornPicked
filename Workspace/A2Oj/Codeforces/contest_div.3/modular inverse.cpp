#include<bits/stdc++.h>
using namespace std;
#define p 10^6+3
int bigmod(int a,int b,int m)
{
    if(b==0)
        return 1;
    int x=bigmod(a,b/2,m);
    x=(x*x)%m;
    if(b%2==1)
        x=(x*a)%m;
    return x;
}
int main()
{
    int b,m,t;
    cin>>t;
    while(t--)
    {
        cin>>b>>m;
        cout<<bigmod(b,p-2,m);
    }
}
