//7-10-19 1.10pm

#include<bits/stdc++.h>
using namespace std;

double ab,ac,bc,ad,ae,de;
double abc,ade,bdec,R;

double findingR(double ad)
{
    ae=ad*(ac/ab);
    de=ad*(bc/ab);

    double s1,s2;
    s1=(ab+ac+bc)/2.0;
    s2=(ad+de+ae)/2.0;

    abc=sqrt(s1*(s1-ab)*(s1-bc)*(s1-ac));
    ade=sqrt(s2*(s2-ad)*(s2-ae)*(s2-de));

    bdec=abc-ade;
    return ade/bdec;
}

double findingAD()
{
    double lo=0.0,hi=ab;
    double mid;
    for(int i=0; i<=100; i++)
    {
        mid=lo+(hi-lo)/2;
        ad=mid;

        if(findingR(ad) > R)
            hi=mid;
        else
            lo=mid;
    }
    return ad;
}


int main()
{
    int t,kase=1;
    cin>>t;
    while(t--)
    {
        cin>>ab>>ac>>bc>>R;
        printf("Case %d: ",kase++);
        cout<<setprecision(11)<<findingAD()<<endl;
    }
    return 0;
}
