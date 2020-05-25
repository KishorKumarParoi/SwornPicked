//2-11-19 6.52am
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,ans,r;
    cin>>n;
    int arr[n+10];
    int sum=0;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+n);
    int cnt=0,x=0;
    for(i=n-1; i>=0; i--)
    {
        x+=arr[i];
        cnt++;
        if(x>sum/2)
        {
            cout<<cnt<<endl;
            return 0;
        }
    }
}
