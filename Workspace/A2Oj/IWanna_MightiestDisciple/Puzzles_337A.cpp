//5-11-19 6.18am
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1010],n,m,i,k;
    cin>>n>>m;

    for(i=0; i<m; i++)
        cin>>a[i];

    sort(a,a+m);

    int diff,best=INT_MAX;

    for(i=0; i+n-1<m; i++)
    {
        best=min(best,a[i+n-1]-a[i]);
    }

    cout<<best<<endl;
    return 0;
}
