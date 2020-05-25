#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cnt=0;
    char s[10000];
    while(gets(s))
    {
        int l=strlen(s);
        for(int i=0;i<l;i++)
        {
            if(s[i]=='"')
            {
                cnt++;
                if(cnt%2==1)
                    printf("``");
                else
                    printf("''");
            }
            else
                printf("%c",s[i]);
        }
        printf("\n");
    }
    return 0;
}
