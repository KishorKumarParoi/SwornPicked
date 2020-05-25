//07-08-19 5.25pm
#include<bits/stdc++.h>
#include<cmath>
#define pi acos(-1.0)
using namespace std;
int main()
{
    int kase=1,tc;
    cin>>tc;
    while(tc--)
    {
        double a,b,c,ra,rb,rc,A,B,C,x,y,z,area;
        cin>>ra>>rb>>rc;
        a=rb+rc;
        b=ra+rc;
        c=ra+rb;
        x=((b*b+c*c)-(a*a))/(2*b*c);
        y=((a*a+c*c)-(b*b))/(2*a*c);
        z=((b*b+a*a)-(c*c))/(2*b*a);
        A=acos(x);
        B=acos(y);
        C=acos(z);
        //cout<<A<<" "<<B<<" "<<C<<endl;
        double s = (a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        area=area- 0.5*((ra*ra*A)+(rb*rb*B)+(rc*rc*C));
        printf("Case %d: %.10lf\n",kase++,area);
    }
    return 0;
}
