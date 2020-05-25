#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x = 0, t;
    char A[5];
    scanf("%d", &t);
    while (t--)
    {
        scanf(" %s", A);
        if ( A[1] == '+')
        {
            x++;
        }
        else
        {
            x--;
        }
    }
    printf("%d\n", x);
    return 0;
}
/*#include<stdio.h>
int main()
{
char A[5];
int n,i,x=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%s",A);
if(A[0]=='+'||A[1]=='+')
{
x++;
}
else
{
x--;
}
}
printf("%d\n",x);
return 0;
}*/