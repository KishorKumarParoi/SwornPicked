#include<bits/stdc++.h>
#include<cmath>
#define PI acos(-1.0)
using namespace std;
int main()
{
    int t;
    int r1,r2,h,p;
    double R,V;
    int kase=1;
    cin>>t;
    while(t--)
    {
        cin>>r1>>r2>>h>>p;
        R=r2+((r1-r2)*(double(p)/h));
        V=(1/3.0)*PI*p*(r2*r2 + r2*R +R*R);
        printf("Case %d: %lf\n",kase++,V);
    }
    return 0;
}
