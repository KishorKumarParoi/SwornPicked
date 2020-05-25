#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,m,i;
    cin>>n>>m;
    if(n>=m)
    {
        for(i=1; i<=n; i++)
        {
            cout<<"B";
            if(i<=m)
            {
                cout<<"G";
            }
        }
    }
    else
    {
        for(i=1; i<=m; i++)
        {
            cout<<"G";
            if(i<=n)
            {
                cout<<"B";
            }
        }
    }


    return 0;
}
