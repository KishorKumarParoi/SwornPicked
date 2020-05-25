#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int i,j,a[n+2];

        for(i=0; i<n; i++)
            cin>>a[i];
        sort(a,a+n);
        int cnt=1;
        for(i=0; i<n-1; i++)
        {
            if(a[i+1]-a[i]==1)
                cnt=2;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
