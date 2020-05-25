#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,y,mul,cnt=0,ans;
    cin>>x>>y;
    if(x%y==0)
    {
        cout<<"-1\n";
        return 0;
    }
    for(int i=1;; i++)
    {
        if(x%y!=0)
        {
            cout<<x*i<<endl;
            return 0;
        }
    }
}
