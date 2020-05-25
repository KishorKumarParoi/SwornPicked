#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,r,cnt=0;
    cin>>l>>r;
    for(int i=l; i<=r; i++)
    {
        int n=i;
        int x=0;
        while(n!=0)
        {
            x=n%10+x*10;
            n/=10;
        }
        if(i==x)
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
