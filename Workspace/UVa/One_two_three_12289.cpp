#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char n[10];
        //gets(n);
        scanf("%s",&n);
        int l=strlen(n);
        int flag=0;
        if(l==5)
            printf("3\n");
        else
        {
            for(int i=0; i<l; i++)
            {
                if(n[0]=='o' && n[1]=='n')
                    flag=1;
                if(n[0]=='o' && n[2]=='e')
                    flag=1;
                if(n[1]=='n' && n[2]=='e')
                    flag=1;
            }
            if(flag==1)
                printf("1\n");
            else
                printf("2\n");
        }
    }

    return 0;
}
