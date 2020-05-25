//20-2-20
#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define scll(n) scanf("%lld",&n)

using namespace std;

ll bipow(ll a,ll b)
{
    a%=10;
    ll res = 1;

    while(b>0)
    {
        if(b&1)
            res = (res *a)%10;
        a = (a*a)%10;
        b>>=1;
    }
    return res%10;
}

int main()
{
    // _fastio
    //open
    //close
    //printf("I Will Be a RED Coder By this year\n");
    // My Dream Is to Become LGM oneday . I will never go back on my words. That's my ninja Way.

    ll t,a,b;
    scll(t);

    while(t--)
    {
        scll(a);
        scll(b);

        printf("%lld\n",bipow(a,b));
    }

    return 0;
}

