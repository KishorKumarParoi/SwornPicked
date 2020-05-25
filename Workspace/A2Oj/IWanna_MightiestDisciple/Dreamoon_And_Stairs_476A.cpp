//8-11-19 4.31am
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ans,n,m,x,y;
    cin>>n>>m;
    int lo=(n+1)/2;
    ans=(lo+m-1)/m;
    ans*=m;
    if(ans>n)
        cout<<-1<<endl;
    else
        cout<<ans<<endl;
    return 0;
}
