#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cs,t,kase=1;
    cin>>t;
    while(t--)
    {
        double R,n;
        cin>>R>>n;
        double theata=(acos(-1.0)/n);
        double r=R*sin(theata);
        r/=(1+sin(theata));
        printf("Case %d: %.10lf\n",kase++,r);
    }
}
