#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,x,y,z,ans;
    n=1000;
    x=n/3;
    y=n/5;
    z=n/15;
    cout<<x<<" "<<y<<" "<<z<<endl;
    ans+= 3*333*334/2;
    ans+= 5*200*199/2;
    ans-=15*66*67/2;

    int a=0,b=0,c=0;
    for(i=3; i<1000; i+=3)
        a+=i;
    for(i=5; i<1000; i+=5)
        b+=i;
    for(i=15; i<1000; i+=15)
        c+=i;
    cout<<a+b-c<<endl;
    cout<<ans<<endl;
}
