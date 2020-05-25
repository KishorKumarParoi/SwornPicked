#include<bits/stdc++.h>
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c,T,i=1;
    scanf("%d",&T);

    while(T--){
        scanf("%d %d",&a,&b);
        c=a+b;
        printf("Case %d: %d\n",i,c);
        i++;
    }

    return 0;
}

