//22-09-19 9.45pm
#include<bits/stdc++.h>
using namespace std;


double triangle_ratio(double ab,double ac,double bc,double ad)
{
    double ae,de;
    ae=(ad*ac)/ab;
    de=(ad*bc)/ab;

    double s1,s2;
    s2=(ad+de+ae)/2.0;
    s1=(ab+bc+ac)/2.0;
    double area_of_traphizium,area_of_abc,area_of_ade;

    area_of_ade=sqrt(s2*(s2-ae)*(s2-de)*(s2-ad));
    area_of_abc=sqrt(s1*(s1-ab)*(s1-bc)*(s1-ac));

    area_of_traphizium = area_of_abc   -  area_of_ade;

    double R = area_of_ade / area_of_traphizium;

    return R;
}
double calculation_of_ad(double ab,double ac,double bc,double R)
{
    double high,low,ad,mid;
    low=0.0;
    high=ab;
    for(int i=0; i<100; i++)
    {
        mid=(low+high)/2.0;
        ad=mid;
        if(triangle_ratio(ab,ac,bc,ad) > R)
            high=mid;
        else
            low=mid;
    }
    return ad;
}
int main()
{
    int t,kase=1;
    cin>>t;
    while(t--)
    {
        double ab,ac,bc,R;
        cin>>ab>>ac>>bc>>R;
        printf("Case %d: ",kase++);
        cout<<setprecision(10)<<calculation_of_ad(ab,ac,bc,R)<<endl;;
    }
    return 0;
}
