//09-10-19 6.35am
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sc(n) scanf("%lld",&n)

int main()
{
    ll t,kase=1;
    sc(t);
    while(t--)
    {
        ll n;
        sc(n);
        ll num=ceil(sqrt(n));
        ll extnum=num*num - n;

        printf("Case %lld: ",kase++);

        ll row=0,col=0;
        if(extnum<num)
        {
            row=extnum+1;
            col=num;
        }
        else
        {
            row=num;
            col=n-(num-1)*(num-1);
        }
        if(num%2==0)
        {
            swap(row,col);
        }
        cout<<row<<" "<<col<<endl;
    }
    return 0;
}
