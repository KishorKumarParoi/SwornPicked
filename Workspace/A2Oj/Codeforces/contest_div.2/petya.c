#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    long long int n,k,x,p,q,r;
    scanf("%lld%lld",&n,&k);
    double i,j,m;
    i=(n*2.0)/(k*1.0);
    j=(n*5.0)/(k*1.0);
    m=(n*8.0)/(k*1.0);
    i=ceil(i);
    j=ceil(j);
    m=ceil(m);
    p=i;
    q=j;
    r=m;
    printf("%lld\n",p+q+r);

    
    return 0;
}
