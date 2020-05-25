#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sc(n) scanf("%lf",&n)


double Area(double x,double W,double L)
{
    return x*(W-(2*x))*(L-(2*x));
}
int main()
{
    ll kase=1,t;
    cin>>t;
    while(t--)
    {
        double L,W,x;
        sc(L);
        sc(W);

        double upper_bound=max(L,W);
        double lower_bound=min(L,W);
        int nCount=100;
        double temp=0,area;

        while(nCount--)
        {
            double temp=upper_bound+lower_bound/2;
            double ans=INT_MIN;
            area=Area(temp,W,L);

            if(area == ans)
                ans=area;
            if(area<ans)
                lower_bound=temp;
        }
        double ans;
        printf("Case %lld: %lf\n",kase++,area);
    }
    return 0;
}
