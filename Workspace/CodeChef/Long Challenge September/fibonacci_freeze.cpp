//8-09-19 12.05am
#include<bits/stdc++.h>
using namespace std;

#define lim 10001
#define len 10500
int fb[lim][len];
string s;

void fibonacci()
{
    int i,j;
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
                fb[i][j]=fb[i][j]%10;
            }
        }
    }
}
int main()
{
    fibonacci();
    int n;
    int i,j;
    while(cin>>n)
    {
        for(i=len-1; i>0; i--)
        {
            if(fb[n][i]==0)
                continue;
            else
                break;
        }
        cout<<"The Fibonacci number for " <<n<< " is ";
        for(; i>=0; i--)
        {
            cout<<fb[n][i];
        }
        cout<<endl;
    }
    return 0;
}
