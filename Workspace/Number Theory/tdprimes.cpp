#include<bits/stdc++.h>
using namespace std;
#define eb emplace_back
bool Status[110000002];
vector<int>pr;
void Normal_Sieve()
{
    int N =100000000;
    int i,j,sq= sqrt(N*1.);
    for(i=4; i<=N; i+=2)
        Status[i]=1;
    pr.eb(2);
    for(i=3; i<=sq; i+=2)
    {
        if(Status[i]==0)
        {
            //pr.eb(i);
            for(j=i*i; j<=N; j+=i)
            {
                Status[j]=1;
            }
        }
    }
    Status[1]=1;
    for(i=3; i<=N; i+=2)
    {
        if(Status[i]==0)
            pr.eb(i);
    }
 for(i=0;i<=pr.size();i+=100)
 {
        cout<<pr[i]<<" ";
 }
    cout<<endl;
}
int main()
{
    Normal_Sieve();
}
