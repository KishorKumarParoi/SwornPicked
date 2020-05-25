//10-08-19 2.42pm
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll fact[25];
    ll i,j,m,n,t,kase=1;
    fact[0]=1;
    for(i=1; i<=20; i++)
    {
        fact[i]=fact[i-1]*i;
        //cout<<fact[i]<<endl;
    }
    cin>>t;
    while(t--)
    {
        stack<int>s;
        cin>>n;
        for(j=20; j>=0; j--)
        {
            if(fact[j]<=n)
            {
                n-=fact[j];
                //cout<<j<<endl;
                s.push(j);
            }
        }
        //cout<<n<<endl;
        if(n==0)
        {
            printf("Case %d: ",kase++);
            while(s.size()!=1)
            {
                printf("%d!+",s.top());
                s.pop();
            }
            printf("%d!\n",s.top());
            s.pop();
        }
        else
            printf("Case %d: impossible\n",kase++);
    }
    return 0;
}
