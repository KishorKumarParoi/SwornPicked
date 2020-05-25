#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,up,down,cnt,i;
    int s[15];
    printf("Lumberjacks:\n");
    while(scanf("%d",&n)==1)
    {
        while(n--)
        {

            for(i=0; i<10; i++)
            {
                scanf("%d",&s[i]);
            }
            up=s[0];
            down=s[1];
            if(up>down)
            {
                cnt=0;
                for(i=0; i<9; i++)
                {
                    if(s[i]>s[i+1])
                    {
                        cnt++;
                    }
                }
            }
            else if(up<down)
            {
                cnt=0;
                for(i=0; i<9; i++)
                {
                    if(s[i]<s[i+1])
                    {
                        cnt++;
                    }
                }

            }
            if(cnt==9)
                printf("Ordered\n");
            else
                printf("Unordered\n");
        }
    }
    return 0;
}
