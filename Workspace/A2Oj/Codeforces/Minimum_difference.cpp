#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n,k;
    cin>>n>>k;
    ll a[n+10];
    for(int i=1; i<=n; i++)
        cin>>a[i];
    sort(a+1,a+1+n);
    for(int i=1; i<=n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
    for(int i=1; i<=n/2; i++)
    {
        ll kishor;
        kishor=(a[i+1]-a[i]+a[n-i+1]-a[n-i])*i;
        cout<< "kishor = "<<kishor<<endl;
        if(k>=kishor)
        {
            k-=kishor;
            cout<<"k = "<<k<<endl;
        }
        else
        {
           // cout<<k/i<<endl;
            cout<<a[n-i+1]-a[i]-k/i;
            return 0;
        }
    }
    cout<<0;
    return 0;
}
