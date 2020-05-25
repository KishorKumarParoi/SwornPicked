#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll sum=0;
        for(i=5;; i*=5)
        {
            if(n<i)
                break;
            sum+=(n/i);
        }
        cout<<sum<<endl;
    }
    return 0;
}
