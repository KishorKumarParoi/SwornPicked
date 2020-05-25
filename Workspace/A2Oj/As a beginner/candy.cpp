#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int sum=0;
        while(n--)
        {
            int x;
            cin>>x;
            sum+=(x/k);
        }
        cout<<sum<<endl;
    }
}
