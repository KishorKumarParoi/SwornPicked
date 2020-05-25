#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int A[],int n)
{
    int i,j,temp;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(A[j]>=A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
}
int main()
{
    int t,i,j,k,n,sum=0,res;
    int A[101],B[101];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }
    bubble_sort(A,n);

    for(i=0; i<n; i++)
    {
        k=A[i+1]-A[i];
        B[i]=k;
        sum=sum+B[i];
        A[i++];
    }

    printf("%d\n",sum);
    return 0;
}


