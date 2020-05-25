#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    cout<<a[n-1]<< " ";
    for(i=n-1; i>=0; i--)
    {
        if((a[n-1]%a[i]) || a[i]==a[i-1])
        {
            cout<<a[i];
            break;
        }
    }

    return 0;
}
