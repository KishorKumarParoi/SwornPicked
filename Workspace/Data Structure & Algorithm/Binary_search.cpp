#include<bits/stdc++.h>
using namespace std;

int binary_search(int A[],int x,int n)
{
    int left=0,right=n-1,mid;
    while(left<=right)
    {
        mid = (left+right)/2;
        if(A[mid]==x)
            return mid;

        if(A[mid]<x)
            left=mid+1;
        else
            right =mid-1;
    }
    return mid;
}

int main()
{
    int A[10]={1,3,5,6,7,8,13,24,56,78};
    int x,n;
    cin>>x;
   int y = binary_search(A,10,x);
    cout<<A[y]<<endl;
}

