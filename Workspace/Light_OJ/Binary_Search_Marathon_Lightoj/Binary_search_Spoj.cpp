//22-09-19 9.55pm

#include<bits/stdc++.h>
using namespace std;
vector<int>v;

int binarySearch(int low,int high,int x)
{
    int mid;
    while(v[mid]!=x)
    {
        mid=low+(high-low)/2;
        if(v[mid]==x)
        {
            return mid;
        }
        if(v[mid]>x)
        {
            high=mid-1;
        }
        if(v[mid]<x)
        {
            low=mid+1;
        }
    }
    return -1;
}
int main()
{
    int t,n,q;
    scanf("%d%d",&n,&q);
    //vector<int>v;
    v.clear();
    for(int i=0; i<n; i++)
    {
        int x;
        scanf("%d",&x);
        v.push_back(x);
    }
    while(q--)
    {
        int query;
        scanf("%d",&query);
        if(binarySearch(0,n-1,query)==-1)
            cout<<-1<<endl;
        else
            cout<<binarySearch(0,n-1,query)<<endl;
    }
}
