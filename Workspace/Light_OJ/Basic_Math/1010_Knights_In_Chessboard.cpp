//9-10-19 4.17am
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,kase=1;
    cin>>t;
    while(t--)
    {
        int n,m,ans;
        cin>>m>>n;
        printf("Case %d: ",kase++);

        if(n==1 || m==1)
        {
            cout<<max(n,m)<<endl;
        }

        else  if(n==2 || m==2)
        {
            int mx=max(n,m);
            ans=mx;
            if(mx%4==3 || mx%4==1)
                ans++;
            if(mx%4==2)
                ans+=2;
            cout<<ans<<endl;
        }
        else if((n*m)%2)
            cout<<(n*m/2)+1<<endl;
        else
            cout<<(n*m)/2<<endl;
    }
    return 0;
}
