#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    char s[101];
    char s1[5];
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf(" %[^\n]",&s);
        int ln=strlen(s);
        for(int i=0; i<ln; i++)
        {
            if(!strcmp(s, "not" ))
            {
                printf("regularly fancy\n");
            }
            else
            {
                printf("Real Fancy\n");
            }
        }
    }
    return 0;
}
