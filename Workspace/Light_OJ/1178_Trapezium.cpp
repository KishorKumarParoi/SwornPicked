//10-08-19 12.11pm
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int t,kase=1;
    double a,b,c,d,h,x;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d; //hi
        x=(d*d-b*b+a*a+c*c-2*a*c)/(2*a-2*c);
        h=sqrt((d*d)-(x*x));
        printf("Case %d: %.7lf\n",kase++,.5*(a+c)*h);
    }
    return 0;
}
