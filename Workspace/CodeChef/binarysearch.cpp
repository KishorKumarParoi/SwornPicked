//22-09-19 11.50pm
#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>v;

ll binarySearch( ll low,ll high,ll x)
{
    if(high>=low)
    {
        ll mid=low+(high-low)/2;
        if(v[mid]==x)
            return mid;
        if(v[mid]>x)
        {
            return binarySearch(low,mid-1,x);
        }
        if(v[mid]<x)
        {
            return binarySearch(mid+1,high,x);
        }
    }
    return -1;
}

int main()
{
    ll n,q;
    cin>>n>>q;
    v.clear();
    for(ll i=0; i<n; i++)
    {
        ll x;
        cin>>x;
        v.push_back(x);
    }
    while(q--)
    {
        ll num;
        cin>>num;
        ll result=binarySearch(0,n-1,num);
        cout<<result<<endl;
    }
    return 0;
}
