//2-11-19 7.02am
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    int a[10][10];
    int x,y;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            if(a[i][j]==1)
            {
                cout<<abs(i-3)+abs(j-3)<<endl;
                return 0;
            }
        }
    }

}
