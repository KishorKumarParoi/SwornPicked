#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll bipow(ll a,ll b,ll m)
{
    a%=m;
    ll res = 1;

    while(b>0)
    {
        if(b&1)
            res = (res *a)%m;
        a = (a*a)%m;
        b>>=1;
    }
    return res;
}

int main()
{

    return 0;
}
