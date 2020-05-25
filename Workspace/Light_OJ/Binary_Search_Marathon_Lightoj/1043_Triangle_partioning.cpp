//22-09-19 8.23pm

//using 9-10 math
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,kase=1;
    cin>>t;
    while(t--)
    {
        double ab,ac,bc,ad,de,ae,R,x,ans;
        cin>>ab>>ac>>bc>>R;
        x=sqrt(R)/sqrt(R+1);
        ans=x*ab;
        printf("Case %d: ",kase++);
        cout<<setprecision(10)<<ans<<endl;
    }
    return 0;
}
