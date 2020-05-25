#include<bits/stdc++.h>
using namespace std;

#define sorted(v)  sort(v,v+n)

int pairSum(int a[],int b[],int n,int X)
{
    int low=0,high=n-1;
    int cnt=0;
    while(low<high)
    {
        if(a[low]+b[high]==X)
            cnt++;
        if(a[low]+b[high]>X)
            high--;
        else
            low++;

    }
    return cnt;
}
int main()
{
    int n,i,X;
    cin>>n>>X;

    int a[n+5];
    for(i=0; i<n; i++)
        cin>>a[i];

    int b[n+5];
    for(i=0; i<n; i++)
        cin>>b[i];

    sorted(a);
    sorted(b);

    int result = pairSum(a,b,n,X);
    cout<<result<<endl;
}
