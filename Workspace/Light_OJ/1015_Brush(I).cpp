//10-08-19 11.50am
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum,t,i,n,x;
    cin>>t;
    int kase=1;
    while(t--)
    {
        cin>>n;
        sum=0;
        for(i=0; i<n; i++)
        {
            cin>>x;
            if(x<0)
                continue;
            else
                sum+=x;
        }
        printf("Case %d: %d\n",kase++,sum);
    }
    return 0;
}
