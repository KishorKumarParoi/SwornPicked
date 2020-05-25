//2-11-19 8.30am
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a[110],p;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>p;
        a[p]=i;
    }
    for(i=1; i<=n; i++)
        cout<<a[i]<<" ";
    cout<<endl;

    return 0;
}
