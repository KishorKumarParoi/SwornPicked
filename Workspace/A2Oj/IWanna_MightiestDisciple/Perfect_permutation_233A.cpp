//4-11-19 2.14am
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[110],n,i;
    cin>>n;

    if(n%2)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    else
    {
        for(i=1; i<=n; i++)
            a[i]=i;
        for(i=1; i<n; i++)
        {
            swap(a[i],a[i+1]);
            i++;
        }
    }
    for(i=1; i<=n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
