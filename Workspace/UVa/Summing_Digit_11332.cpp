/*#include<bits/stdc++.h>
using namespace std;
//#include<stdio.h>
long long int rs(long long int s);
int main()
{
    int n;
    while(scanf("%lld",&n))
    {

        if(n==0)
            break;
        rs(n);
    }
}

long long int rs(long long int s)
{
    long long int i,sum=0;
    while(s>0)
    {
        sum=sum+s%10;
        s=s/10;
    }
    if(sum<10)
        printf("%lld\n",sum);
    else
        rs(sum);
}
/*
int recursionSum(int n)
{
    int sum=0;
    while(n>0)
    {
        sum=sum+n%10;
        n=n/10;
    }
    if(sum<10)
       printf("%d\n",sum);
    else
    recursionSum(sum);
}
int main()
{
    int n;
    while(scanf("%d",&n))
    {
        if(n==0)
            break;
        recursionSum(n);
    }
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum;
    long long int n;

    while(scanf("%lld",&n)==1)
    {
        if(n==0)
            break;

        sum=0;
        while(1)
        {

            while(n!=0)
            {
                sum=sum+(n%10);
                n=n/10;
            }
            if(sum/10==0)
                break;
            else
            {
                n=sum;
                sum=0;
            }
        }

        printf("%d\n",sum);
    }

    return 0;
}

