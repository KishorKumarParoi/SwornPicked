#include<bits/stdc++.h>
using namespace std;

void calculation(int n,int k)
{
    int res=0;
    while(n) v
    {
        n/=k;
        res+=n;
    }
    cout<<res<<endl;
}
int main()
{
    int kase=1,t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        printf("Case %d: ",kase++);
        calculation(n,k);
    }
}
