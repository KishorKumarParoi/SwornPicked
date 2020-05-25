//30-07-19 8.25pm
#include<bits/stdc++.h>
using namespace std;
#define Pi acos(-1.0)
int main()
{
    double r,ans,k,res;
    int t,i,j,cs;
    cin>>t;
    for(cs=1; cs<=t; cs++)
    {
        cin>>r;
        ans=((2*r)*(2*r))-(Pi*r*r);
        printf("Case %d: %.2lf\n",cs,ans);
    }
}
