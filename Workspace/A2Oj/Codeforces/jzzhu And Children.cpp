#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,y,x,a,p = 0;
    cin>>n>>m;
    for(int i = 1; i <= n; i++)
    {
        cin>>a;
        y = (a+m-1)/m;
        if(y >= p)
        {
            x = i;
            p = y;
        }
    }
    cout<<x<<endl;
    return 0;
}
