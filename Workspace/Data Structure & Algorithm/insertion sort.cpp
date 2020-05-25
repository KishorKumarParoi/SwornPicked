#include<bits/algorithmfwd.h>
#include<bits/stdc++.h>
#include<iostream>
#include<set>
using namespace std;
void swap(int *xp,int *yp)
{
    int temp=*xp;
    *xp=*yp;
    *yp=temp;
}
void selectionSort(int A[],int n)
{
    int min_index,i,j;
    //i=0;
    for(i=0; i<n-1; i++)
    {
        min_index=i;
        //j=i+1;
        for(j=i+1; j<n; j++)
        {
            if(A[j]<A[min_index])
            {
                min_index=j;
            }
        }
        swap(&A[min_index],&A[i]);
    }

}
void printArray(int A[],int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        cout<< A[i] << " ";
    }
    cout<<"\n";
}
int main()
{
    int n,i;
    cin>>n;
    int A[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }

    selectionSort(A,n);
    cout<<"Sorted Array : ";
    printArray(A,n);
    return 0;
}
