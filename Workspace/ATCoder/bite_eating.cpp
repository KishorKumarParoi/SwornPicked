#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l;
    cin>>n>>l;
    int sum=0;
    int a[210];
    for(int i=1; i<=n; i++)
    {
        a[i-1]=l+i-1;
        sum+=a[i-1];
    }
    sort(a,a+n);
    if(n>=2 && l>=0)
        cout<<sum-a[0]<<endl;
    else
    {
        if(n>=2 && n<=(-1)*l)
            cout<<sum-a[n-1]<<endl;
        else
            cout<<0<<endl;
    }
}
