//3-09-19
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c,i,j,sum,ans;
    cin>>r>>c;
    int a[110][110];
    for(i=1; i<=r; i++)
        for(j=1; j<=c; j++)
            cin>>a[i][j];
    ans=0;
    for(i=1; i<=r; i++)
    {
        sum=0;
        for(j=1; j<=c; j++)
        {
            cout<<a[i][j]<<" ";
            sum+=a[i][j];
        }
        ans+=sum;
        cout<<sum;
        cout<<"\n";
    }
    for(i=1; i<=c; i++)
    {
        sum=0;
        for(j=1; j<=r; j++)
        {
            sum+=a[j][i];
        }
        cout<<sum<<" ";
    }
    cout<<ans<<endl;
}
