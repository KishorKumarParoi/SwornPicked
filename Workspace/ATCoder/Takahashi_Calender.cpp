#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i;
    cin>>a>>b;
    int cnt=0;
    for(i=22; i<=b; i++)
    {
        int x=i%10;
        int y=i/10;
        if(x>=2 && y>=2 && x*y<=a)
        {
            cnt++;
            // cout<<i<<" ";
        }
    }
    cout<<cnt<<endl;
}
