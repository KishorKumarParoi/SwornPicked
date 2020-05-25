//25-09-19 6.05pm
#include<bits/stdc++.h>
using namespace std;
#define sc(n) scanf("%d",&n)

int used[28];
int number[28];
int N,K;

void permutation(int at,int n)
{
    if(K<=0)
        return;
    if(at==(n+1))
    {
        for(int i=1; i<=n; i++)
        {
            printf("%c",(64+number[i]));
        }
        printf("\n");
        K--;
        return;
    }

    for(int i=1; i<=n; i++)
    {
        if(!used[i])
        {
            used[i]=1;
            number[at]=i;
            permutation(at+1,n);
            used[i]=0;
        }
    }
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t,kase=1;
    sc(t);
    while(t--)
    {
        memset(used,0,sizeof(used));
        memset(number,0,sizeof(number));
        sc(N);
        sc(K);
        printf("Case %d:\n",kase++);
        permutation(1,N);
    }
    return 0;
}
