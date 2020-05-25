#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d;
    cin>>n>>d;
    int x=d*2+1;
    int y=n%x;
    if(y==0)
        cout<<n/x<<endl;
    else
        cout<<n/x+1<<endl;
}
