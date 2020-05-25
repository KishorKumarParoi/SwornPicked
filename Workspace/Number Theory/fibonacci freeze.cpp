#include<bits/stdc++.h>
#define lim 10001
#define len 10500
#define ll long long int

using namespace std;

ll fb[lim][len];

void fibonacci()
{
    ll i,j,k,sum;
    fb[0][0]=0;
    fb[1][0]=1;
    fb[2][0]=1;

    for(i=3; i<lim; i++)
    {
        for(j=0; j<len; j++)
        {
            fb[i][j]+=fb[i-1][j]+fb[i-2][j];
            if(fb[i][j]>=10)
            {
                fb[i][j+1]+=fb[i][j]/10;
                fb[i][j]%=10;
            }
        }
    }
}

int main()
{
    fibonacci();
    ll n,i,j,k,lenth;
    while(cin>>n)
    {
        int cnt=0;
        int cnt_cnt=0;
        for(i=len-1; i>0; i--)
        {
            if(fb[n][i]!=0)
            {
                cnt++;
                break;
            }
            cnt_cnt++;
        }
        cout<<"i="<<i<<" "<<cnt<<" "<<cnt_cnt<<endl;
        cout<<"The Fibonacci number for " <<n<< " is ";
        for(; i>=0; i--)
        {
            cout<<fb[n][i];
        }
        cout<<endl;
       //cout<<fb[n][2]<<fb[n][1]<<fb[n][0]<<endl;
    }
    return 0;
}

