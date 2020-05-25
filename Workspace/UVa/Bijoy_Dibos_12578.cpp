#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,area_green,area_red;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lf",&a);
        double i,j,k;
        i=.2*a;
        area_red=acos(-1)*i*i;
        j=.6*a;
        k=a*j;
        area_green=k-area_red;
        printf("%.2lf %.2lf\n",area_red,area_green);

    }
    return 0;
}
