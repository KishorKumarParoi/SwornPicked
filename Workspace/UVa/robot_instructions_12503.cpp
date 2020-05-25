#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    int n,f,i,p,k,g;
    char s[10],a[10];
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        for(i=1; i<=n; i++)
        {
            scanf("%s",&s[i]);
        }
        p=0;
        for(i=1; i<=n; i++)
        {
            if(strcmp(s, "LEFT" ))
            {
                //f=a[i];
                p--;
            }
            if(strcmp(s, "RIGHT" ))
            {
                //g=a[i];
                p++;
            }


        }
        printf("%d\n",p);
    }
    return 0;
}
