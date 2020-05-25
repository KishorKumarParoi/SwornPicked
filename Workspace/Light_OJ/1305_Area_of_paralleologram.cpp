#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,ax,ay,bx,by,cx,cy,ans,r,kase=1;
    cin>>t;
    while(t--)
    {
        ans=0;
        cin>>ax>>ay>>bx>>by>>cx>>cy;
        int dx=(ax+cx)-bx;
        int dy=(ay+cy)-by;
        r=((ax*by)+(bx*cy)+(cx*dy)+(dx*ay))-((bx*ay)+(cx*by)+(dx*cy)+(ax*dy));
        ans=abs(r)*.5;
        printf("Case %d: %d %d %d\n",kase++,dx,dy,ans);
    }
}
