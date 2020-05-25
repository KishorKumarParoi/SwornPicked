#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a1,a2,k1,k2,n,i,j,k,K,a,A;
    cin>>a1>>a2>>k1>>k2>>n;

    if(k1>k2)
    {
        K=k1;
        k=k2;
        A=a1;
        a=a2;
    }
    else
    {
        K=k2;
        k=k1;
        A=a2;
        a=a1;
    }

    //minimum
    int x=0,y=0,z=0,m=0;
    x=n/K;
    if(A>x)
        z+=(x);
    else
        z+=(A);
    y=(n-z*A)/k;
    if(a>y)
        z+=y;
    else
        z+=(a);
    cout<<z<<" ";

    //maximum
    x=0,y=0,z=0,m=0;
    x=n/k;
    if(a>x)
        z+=(x);
    else
        z+=(a);
    y=(n-z*a)/K;
    if(A>y)
        z+=y;
    else
        z+=(A);
    cout<<z<<endl;
}

