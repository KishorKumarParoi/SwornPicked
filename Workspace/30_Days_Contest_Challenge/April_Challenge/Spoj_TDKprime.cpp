#include<bits/stdc++.h>
using namespace std;

bool composite[100000005];
vector<int>primes;

void sieve()
{
    composite[1] = 1;

    for(int i=2; (long long)i*i<=100000000; i++)
    {
        if(composite[i]==0)
        {
            for(int j = i*i ; j<=100000000; j += i)
            {
                composite[j] = 1;
            }
        }
    }

    for(int i =2; i<=100000000; i++)
    {
        if(composite[i]==0)
        {
            primes.push_back(i);
            //cout<<i<< " ";
        }
    }
    cout<<endl;
}

int main()
{

    sieve();
    int x;
    scanf("%d",&x);

    while(x--)
    {
        int n;
        scanf("%d",&n);

        printf("%d\n",primes[n-1]);
    }
    return 0;
}
