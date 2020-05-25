#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int f,c1,k=1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&c1,&f);
        double i=c1;
        double j=f;

        double a=9*(1.0);
        double b=5*(1.0);
        double m=(a*c1)/b;
        double n=m+j;
        double c2=(b*n)/a;
        printf("Case %d: %.2lf\n",k++,c2);
    }
    return 0;
}
