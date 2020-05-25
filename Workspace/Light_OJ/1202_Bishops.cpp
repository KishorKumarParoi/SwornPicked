//10-08-19 11.52pm
#include<bits/stdc++.h>

int main()
{
    int test,i,x1,y1,x2,y2;
    scanf("%d",&test);
    for(i=1; i<=test; i++)
    {
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        printf("Case %d: ",i);
        x1=abs(x1-x2);
        y1=abs(y1-y2);
        if(x1==y1)
            printf("1\n");
        else
        {
            if(x1%2==y1%2)
                printf("2\n");
            else
                printf("impossible\n");
        }
    }
    return 0;
}

