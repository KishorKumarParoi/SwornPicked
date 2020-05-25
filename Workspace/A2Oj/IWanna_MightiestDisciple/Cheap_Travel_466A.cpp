//5-11-19 8.51am
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b;
    int ans,x,y;
    cin>>n>>m>>a>>b;
    if(m*a <=b)
    {
        ans=n*a;
    }
    else
    {
        ans=((n/m)*b) + min((n%m)*a,b);
    }
    cout<<ans<<endl;
    return 0;
}
