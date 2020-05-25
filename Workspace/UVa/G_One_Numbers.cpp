#include<bits/stdc++.h>
using namespace std;
vector<int>prime;
bool Status[11002];
void siv()
{
    int N =10000;
    int i,j,sq= (int)sqrt(N);
    for(i=4; i<=sq; i+=2)
        Status[i]=1;
    for(i=3; i<=sq; i+=2)
    {
        if(Status[i]==0)
        {
            for(j=i*i; j<=N; j+=i)
            {
                Status[j]=1;
            }
        }
    }
    Status[1]=1;
    for(i=2;i<=N;i++)
        if(Status[i]==0)
        prime.push_back(i);
}
int G_one(int l,int h)
{
    int cnt=0;
    for(int i=l; i<=h; i++)
    {
        int x=0;
        int k=i;
        while(k>0)
        {
            x+=k%10;
            k/=10;
        }
        for(int j=0; j<=prime.size(); j++)
        {
            if(x==prime[j])
                cnt++;
        }
    }
    return cnt;
}
int main()
{
    siv();
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>m>>n;
        cout<<G_one(m,n)<<endl;
    }
}
