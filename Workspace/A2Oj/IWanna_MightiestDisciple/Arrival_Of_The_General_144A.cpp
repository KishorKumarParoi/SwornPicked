//4-11-19 2.36am
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a[110];
    cin>>n;
    for(i=0; i<n; i++)
        cin>>a[i];
    int maxx=a[0];
    int mini=a[0];

    int maxi_pos=0,mini_pos=0;

    for(i=0; i<n; i++)
    {
        if(a[i]>maxx)
        {
            maxx=a[i];
            maxi_pos=i;
        }
        if(a[i]<=mini)
        {
            mini=a[i];
            mini_pos=i;
        }
    }
    //cout<<maxi_pos<<" "<<mini_pos<<endl;
    if(maxi_pos<mini_pos)
        cout<<(maxi_pos-1+n-mini_pos)<<endl;
    else
        cout<<(maxi_pos-2+n-mini_pos)<<endl;
    return 0;
}
