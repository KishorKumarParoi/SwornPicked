#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,k;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            for(k=1;k<=3;k++)
            {
                if(j!=i && k!=i && k!=j)
                printf("%d %d %d\n",i,j,k);
            }
        }
    }
    return 0;
}
