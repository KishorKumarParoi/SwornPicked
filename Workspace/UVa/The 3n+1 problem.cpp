#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,s,temp,cnt,m;
    while(scanf("%d %d",&n,&m)==2)
    {
        s=0;
        printf("%d %d ",n,m);
        if(n>m)
        {
            temp=m;
            m=n;
            n=temp;
        }
        for(i=n; i<=m; i++)
        {
            cnt=1;
            j=i;
            while(j>1)
            {
                if(j%2==0)
                    j=j/2;
                else
                    j=3*j+1;
                cnt++;
            }
            if(cnt>=s)
                s=cnt;
        }
        printf("%d\n",s);

    }
    return 0;
}
