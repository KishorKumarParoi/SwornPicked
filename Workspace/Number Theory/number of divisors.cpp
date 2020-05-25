#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll a,i,n,cnt;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll sq=(int)sqrt(n);
        ll cnt=0;
        //cout<<sq<<endl;
        for(i=2; i<=sq; i++)
        {
            if(n%i==0)
                cnt++;
        }
        if(!(sq*sq==n))
        cout<<(cnt+cnt)+2<<endl;
        else
            cout<<(cnt+cnt)+1<<endl;
    }
}
