//07-08-19 8.20pm
#include<bits/stdc++.h>
using namespace std;
int q,n;

inline int zeros(int n)
{
    int ret=0;
    while(n>0)
    {
        n/=5;
        ret+=n;
        //cout<<"n = "<<n<<endl;
       // cout<<"ret = "<<ret<<endl;
    }
   // cout<<"ret == "<<ret<<endl;
    return ret;
}
int explore(int start,int end)
{
    int mid,cnt,t;
    if(start>end)
        return -1;
    mid=(start +end)/2;
    cnt=zeros(mid);
    if(cnt==n)
    {
        while(zeros(mid)==n)
            mid--;
        return ++mid;
    }
    if(cnt < n)
    {
        return explore(mid+1, end);
    }

    else
    {
        return explore(start, mid-1);
    }
}
int main()
{
    int t,ans;
    int kase=1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ans=explore(1,INT_MAX);
        if(ans != -1)
        {
            printf("Case %d: %d\n", kase++, ans);
        }
        else
        {
            printf("Case %d: impossible\n", kase++);
        }
    }
}
