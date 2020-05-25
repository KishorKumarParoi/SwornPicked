#include<bits/stdc++.h>
#include<cstdio>
using namespace std;

void rec_print(char *s)
{
    if(s[0]=='\n')
        return ;
    printf("%c",s[0]);
    return rec_print(s+1);
}
int main()
{
    char s[] ="abcde";
    rec_print(s);
    printf("\n");
    return 0;
}
