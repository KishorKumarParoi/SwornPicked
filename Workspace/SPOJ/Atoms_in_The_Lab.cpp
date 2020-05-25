#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int n,sum,k,m,ans;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>m;
        int cnt=0;
        while(1)
        {
            n=n*k;
            if(n>m)
                break;
            cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
