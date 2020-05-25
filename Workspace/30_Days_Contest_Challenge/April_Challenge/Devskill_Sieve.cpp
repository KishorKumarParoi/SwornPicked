#include<bits/stdc++.h>
using namespace std;
using namespace std::chrono;

int primeCheck(int n)
{
    if(n==1)
        return 0;
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}

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
            cout<<i<< " ";
        }
    }
    cout<<endl;
}

int main()
{
    auto st = high_resolution_clock::now();
    sieve(10000);
    auto en = high_resolution_clock::now();
    auto duration = duration_cast < milliseconds > (en-st);
    cout<< "consumed time in ms " << duration.count() <<endl;

    return 0;
}
