#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n,k;
    cin>>n>>k;
    ll a[n+10];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    cout<<abs((a[0]+k)-a[n-1])<<endl;
}
