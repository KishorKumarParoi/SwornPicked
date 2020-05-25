#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x=3;
        cin>>n;
        if(n==1)
        {
            cout<<n<<endl;
        }
        else
        {
            int cnt=0;
            while(n)
            {
                n-=x;
                cnt++;
                x*=x;
                if(n==0 || n==1)
                {
                    cout<<cnt<<endl;
                    return 0;
                }
                else
                    n=n+1;
            }
        }
    }
}
