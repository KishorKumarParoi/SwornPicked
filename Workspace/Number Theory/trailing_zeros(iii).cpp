//19-09-19 10.11pm
#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t,kase=1;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x,y;
        x=n*5;
        int cnt=0;
        y=5;
        while(x>=y)
        {
            cnt+=(x/y);
            y*=5;
        }
        printf("Case %d: ",kase++);
        if(cnt==n)
            cout<<x<<endl;
        else
            cout<< "impossible"<<endl;
    }
}
