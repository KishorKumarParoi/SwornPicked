#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long

ull f[10001000],kishor;
ull fib(ull n)
{
    f[0]=0;
    f[1]=1;
    for(int i=2; i<=n*n; i++)
    {
        f[i]=(f[i-1]+f[i-2])%10;
        if(f[i]==f[1] && f[i-1]==f[0])
        {
            kishor=i-1;
            break;
        }
    }
    return kishor;
}
ull binary(ull n)
{
    string s;
    int cnt=0;
    while(n>0)
    {
        s+=(n%2==0) ? "0" : "1" ;
        n/=2;
        cnt++;
    }
    reverse(s.begin(),s.end());
    //cout<<s<<" "<<cnt<<endl;
    return (1<<(cnt-1));
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ull n;
        cin>>n;
        cout<<fib(n)<<endl;;
        for(int i=0; i<=n; i++)
            cout<<f[i]<<" ";
        cout<<endl;
        int x=binary(n);
        cout<<f[x-1]<<endl;
    }
}
