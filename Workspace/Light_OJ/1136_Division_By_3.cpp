//10-08-19 8.39am
#include<bits/stdc++.h>
using namespace std;
int divisorcount(int n)
{
    if(n==0)
        return 0;
    int ans=(n/3)*2;
    if(n%3==2)
        ans+=1;
    return ans;
}
int main()
{
    int t,kase=1;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        int ans= divisorcount(y)-divisorcount(x-1);    //x-1 bcz amk jodi 7 r 5 deya thake then total 7 -total 4 korte hobe
        printf("Case %d: %d\n",kase++,ans);
    }
}
