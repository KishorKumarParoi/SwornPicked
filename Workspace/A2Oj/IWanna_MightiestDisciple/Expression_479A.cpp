//5-11-19 6.31am
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,ans,c,mx[5];
    cin>>a>>b>>c;
    mx[0]=a+b*c;
    mx[1]=a*(b+c);
    mx[2]=a*b*c;
    mx[3]=(a+b)*c;
    mx[4]=(a+b+c);

    ans=0;
    for(int i=0; i<5; i++)
    {
        if(ans<mx[i])
            ans=mx[i];
    }
    cout<<ans<<endl;
    return 0;
}
