#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
struct A
{
    int a;
    float f;
    char c;
};
int main()
{
    struct A a[3];
    int i;
    for(i=0; i<3; i++)
    {
        scanf("%c",&a[i].c);
        scanf("%d",&a[i].a);
        scanf("%f",&a[i].f);
    }
    for(i=0; i<3; i++)
    {
        printf("%c\t",a[i].c);
        printf("%d\t",a[i].a);
        printf("%f\n",a[i].f);
    }
    return 0;
}
