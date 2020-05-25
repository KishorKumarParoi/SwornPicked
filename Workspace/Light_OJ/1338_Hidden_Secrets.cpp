//10-08-19 11.44pm
#include<stdio.h>
#include<string.h>
int main()
{
    int tst, i, j, cndtn;
    char a[120], b[120];
    scanf("%d", &tst);
    getchar();
    for(i=1; i<=tst; i++)
    {
        int a1[26], b1[26];
        for(j=0; j<26; j++)
        {
            a1[j] = 0;
            b1[j] = 0;
        }
        gets(a);
        gets(b);
        for(j=0; a[j]; j++)
        {
            if(a[j]>=65 && a[j]<=90)
                a1[a[j]-65]++;
            else if(a[j]>=97 && a[j]<=122)
                a1[a[j]-97]++;
        }
        for(j=0; b[j]; j++)
        {
            if(b[j]>=65 && b[j]<=90)
                b1[b[j]-65]++;
            else if(b[j]>=97 && b[j]<=122)
                b1[b[j]-97]++;
        }
        for(j=0, cndtn=1; j<26; j++)
        {
            if(a1[j]!=b1[j])
            {
                printf("Case %d: No\n", i);
                cndtn = 0;
                break;
            }
        }
        if(cndtn==1)
            printf("Case %d: Yes\n", i);

    }
    return 0;
}
