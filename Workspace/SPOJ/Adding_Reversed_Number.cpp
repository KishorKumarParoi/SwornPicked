#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,t;
    cin>>t;
    while(t--)
    {
        int a=0,b=0;
        cin>>x>>y;
        while(x!=0)
        {
            a=a*10+(x%10);
            x/=10;
        }
        // cout<<a<< " ";
        while(y!=0)
        {
            b=b*10+(y%10);
            y/=10;
        }
        //cout<<b<<" ";
        int sum=a+b;
        //cout<<sum<<endl;
        int s=0;
        while(sum!=0)
        {
            s=(s*10)+(sum%10);
            sum/=10;
        }
        cout<<s<<endl;
    }
}
