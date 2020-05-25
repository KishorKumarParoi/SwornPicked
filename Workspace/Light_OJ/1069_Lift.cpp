#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,ans,kase=1,mine,lift;
    cin>>t;
    while(t--)
    {
        ans=0;
        cin>>mine>>lift;
        (mine<=lift) ?  ans=((lift*4)+19) : ans=((2*mine-lift)*4+19);
        printf("Case %d: %d\n",kase++,ans);
    }
}
