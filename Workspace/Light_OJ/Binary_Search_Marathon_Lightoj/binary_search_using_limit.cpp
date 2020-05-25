#include<bits/stdc++.h>
using namespace std;

int Bsearch(int arr[],int n,int x)
{
    int low=0;
    int high=n-1;
    int mid;
    int ans=-1;
    while(low<=high)
    {
        mid=low+(high-low)/2;
        if(arr[mid]>=x)
        {
            if(arr[mid]==x)
                ans = mid;
            high=mid-1;
        }
        else
            low=mid+1;
    }
    return ans;
}

int main()
{
    int n,q,i,j;
    scanf("%d%d",&n,&q);

    int arr[n+5];

    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(i=0; i<q; i++)
    {
        int x;
        scanf("%d",&x);
        int ans=Bsearch(arr,n,x);
        printf("%d\n",ans);
    }
    return 0;
}

