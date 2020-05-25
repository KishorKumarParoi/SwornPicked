#include<bits/stdc++.h>
using namespace std;

bool composite[100000005];
vector<int>primes;

void sieve(int N)
{
    composite[1] = 1;

    for(int i=2; (long long)i*i<=N; i++)
    {
        if(composite[i]==0)
        {
            for(int j = i*i ; j<=N; j += i)
            {
                composite[j] = 1;
            }
        }
    }

    for(int i =2; i<=N; i++)
    {
        if(composite[i]==0)
        {
            primes.push_back(i);
        }
    }
    cout<<endl;
}

void primeFactorization(int N)
{
    int ans = 1;
    for(int i=2; i*i<=N; i++)
    {
        if(N%i==0)
        {
            int cnt = 1;

            while(N%i==0)
                cnt++, N/=i;

            ans*=cnt;
        }
    }

    if(N!=1)
        ans*=2;
    printf("%d\n",ans);
}


int main()
{
    int t,a,b,i,j,n;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d%d",&a,&b);
        int x = __gcd(a,b);
        //sieve(x) ;
        primeFactorization(x);
    }
    return 0;
}
