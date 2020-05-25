//2-11-19 10.41pm
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    int a[4][4]= {1},A[4][4];
    for(i=1; i<=3; i++)
        for(j=1; j<=3; j++)
            cin>>A[i][j];

    for(i=1; i<=3; i++)
    {
        for(j=1; j<=3; j++)
        {
            a[i][j]+=A[i][j];
            if(i>1)
                a[i-1][j]+=A[i][j];
            if(i<3)
                a[i+1][j]+=A[i][j];
            if(j>1)
                a[i][j-1]+=A[i][j];
            if(j<3)
                a[i][j+1]+=A[i][j];
        }
    }
    for(i=1; i<=3; i++)
    {
        for(j=1; j<=3; j++)
        {
            cout<<!(a[i][j]%2);
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
