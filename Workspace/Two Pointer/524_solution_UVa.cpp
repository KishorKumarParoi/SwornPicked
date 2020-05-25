//29-09-19 11.58pm
#include<bits/stdc++.h>
using namespace std;

int N,kase=0;
bool used[20];
int number[20];

#define _fastio                              ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define sc(n) scanf("%d",&n)

bool isPrime(int num)
{
    for(int i=2; i<=sqrt(num); i++)
    {
        if(num%i==0)
            return false;
    }
    return true;
}

void backtracking(int at)
{
    if(at==N-1 && isPrime(number[N-1]+number[N]))
    {
        for(int i=0; i<N; i++)
        {
            printf(i==N-1 ? "%d" : "%d ",number[i]);
        }
        printf("\n");
        return;
    }

    for(int i=2; i<=N; i++)
    {
        if(!used[i] && isPrime(number[at]+i))
        {
            used[i]=1;
            number[at+1]=i;
            backtracking(at+1);
            used[i]=0;
        }

    }
}

int main()
{
    _fastio;
    while(sc(N)!=EOF)
    {
        kase++;
        if(kase>1) putchar('\n');
        number[0]=number[N]=1;
        printf("Case %d:\n",kase);
        backtracking(0);
    }
}
