//9-08-19 1.58pm
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,kase=1,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[110];
        for(int i=0; i<n; i++)
            cin>>a[i];
        int numer=0;
        int denom=n;
        int negatives=0;
        for(int i=0; i<n; i++)
        {
            numer+=abs(a[i]);
            negatives+=((a[i]<0) ? 1 : 0);
        }
        denom-=negatives;
        if(denom==0)
            printf("Case %d: inf\n",kase++);
        else
        {
            int gcd=__gcd(numer,denom);
            //cout<<gcd<<endl;
            printf("Case %d: %d/%d\n",kase++,numer/gcd,denom/gcd);
        }
    }
    return 0;
}
