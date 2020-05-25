#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int n,p,q,m;
unsigned int SA,SB,SC;
vector<unsigned int>v;
stack<unsigned int>S;
unsigned int rng61()
{
    SA^=SA<<16;
    SA^=SA>>5;
    SA^=SA<<1;
    unsigned int t=SA;
    SA=SB;
    SB=SC;
    SC^=t^SA;
    return SC;
}

void PUSH(unsigned int x)
{
    S.push(x);
    while(!S.empty())
    {
        v.push_back(S.top());
        S.pop();
    }
    sort(v.begin(),v.end());
    cout<<v[v.size()-1]<<endl;
}

void POP()
{
    S.pop();
    while(!S.empty())
    {
        v.push_back(S.top());
        S.pop();
    }
    sort(v.begin(),v.end());
    cout<<v[v.size()-1]<<endl;
}

int main()
{
    int t,kase=1;
    cin>>t;
    while(t--)
    {
        scanf("%d%d%d%d%u%u%u",&n,&p,&q,&m,&SA,&SB,&SC);
        //cout<<(p+q)<<" "<<rng61()<<endl;
        for(int i=1; i<=n; i++)
        {
            unsigned int paroi=rng61()%(p+q);
            printf("Case #%d: ",kase++);
            if(paroi<p)
            {
                unsigned int kishor = rng61()%m+1;
                PUSH(kishor);
            }
            else
                POP();
        }
    }
    return 0;
}

