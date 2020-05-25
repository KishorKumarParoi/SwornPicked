//10-08-19 2.12pm
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,lie,kase=1,a[12];
    a[0]=2;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=1; i<=n; i++)
            cin>>a[i];
        //for(i=0; i<=n; i++)
           // cout<<a[i]<< " ";
        //cout<<endl;
        for(i=0,lie=0; i<n; i++)
        {
            if(a[i+1]>a[i])
                lie+=ceil(((double)a[i+1]-a[i])/5);
            //cout<<((double)a[i+1]-a[i])/5<<endl;
            //cout<<lie<<endl;
        }
        printf("Case %d: %d\n",kase++,lie);
    }
}
