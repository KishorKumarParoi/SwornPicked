#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,a[1001],r,cnt,ans,k=1;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        cnt=0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0; i<n; i++)
        {
            if(a[i]==0)
            {
                cnt++;
            }
            r=n-cnt;
            ans=r-cnt;
        }
        printf("Case %d: %d\n",k++,ans);
    }
}
