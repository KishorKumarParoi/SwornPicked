#include<bits/stdc++.h>
using namespace std;

#define sc(a) scanf("%d",&a)
#define SC(n) scanf("%lld",&n)

vector<int>v;
int n,q,x;

int binarySearch(int low,int high,int x)
{
    int mid;
    int limit=log2(n);
    int ans=-1;
    for(int i=0; i<limit+2; i++)
    {
        mid=low+(high-low)/2;
        if(v[mid]==x)
            ans=mid;
        if(v[mid]>x)
        {
            high=mid-1;
        }
        if(v[mid]<x)
        {
            low=mid+1;
        }
    }
    return ans;
}

int main()
{
    scanf("%d%d",&n,&q);
    v.clear();
    for(int i=0; i<n; i++)
    {
        scanf("%d",&x);
        v.push_back(x);
    }
    while(q--)
    {
        int m;
        sc(m);
        cout<<binarySearch(0,n-1,m)<<endl;
    }
}
