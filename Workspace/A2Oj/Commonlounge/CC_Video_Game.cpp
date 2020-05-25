// 17-02-20
#include<bits/stdc++.h>
using namespace std;

#define ll int
#define scll(n) scanf("%d",&n)

int main()
{

    ll h,n;
    scll(n);
    scll(h);

    ll v[100005];

    for(ll i=0; i<n; i++)
    {
        scll(v[i]);
    }

    ll cmd;
    ll x = 0, f = 0;

    while(scll(cmd)==1)
    {
        if (cmd==0)
            break;

        if(cmd==1)
            x--;
        else if(cmd==2)
            x++;
        else if(cmd==3)
        {
            if(f==1)
                continue;
            else
                v[x]--;
        }
        else if(cmd==4)
        {
            if(v[x]==h)
                f=1;
            else
                v[x]++;
        }

    }

    for(ll i=0; i<n; i++)
        cout<<v[i]<<" ";
    cout<<endl;

    return 0;
}
