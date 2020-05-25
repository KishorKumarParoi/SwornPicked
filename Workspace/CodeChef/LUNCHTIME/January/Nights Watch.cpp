#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n,t,cnt;
    char a[1000000];
    cin>>t;
    while(t--)
    {
        cnt=0;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<n; i++)
        {
            if(i==0)
            {
                if(a[i+1]=='0')
                {
                    a[i]='1';
                    cnt++;
                }
            }
            else if(i==(n-1))
            {
                if(a[i]=='0')
                {
                    if(a[i-1]=='0')
                    {
                        a[i]='1';
                        cnt++;
                    }
                }
            }
            else
            {
                if(a[i]=='0')
                {
                    if((a[i+1]=='0') && (a[i-1]=='0'))
                    {
                        a[i]='1';
                        cnt++;
                    }
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
