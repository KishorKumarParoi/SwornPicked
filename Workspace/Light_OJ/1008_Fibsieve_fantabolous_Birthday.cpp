//10-08-19 10.59pm
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t,kase=1,num,a,b;
    cin>>t;
    while(t--)
    {
        cin>>num;
        ll sqt=ceil(sqrt(num));
       // cout<<sqrt(num)<<" "<<sqt<<endl;
        ll extnum=sqt*sqt-num;
       // cout<<extnum<<endl;
        ll row = 0,col=0;
        if(extnum<sqt)
        {
            row=extnum+1;
            col=sqt;
           // cout<<row<<" "<<col<<" "<<endl;
        }
        else
        {
            row=sqt;
            col=num-(sqt-1)*(sqt-1);
            //cout<<row<<" "<<col<<" "<<endl;
        }
        if(sqt%2==0)
            swap(row,col);
       // cout<<row<<" "<<col<<" "<<endl;
        printf("Case %lld: %lld %lld\n",kase++,row,col);
    }
    return 0;
}
