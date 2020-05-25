#include<bits/stdc++.h>

using namespace std;
#define mx  100009

typedef long long ll;

vector < int > primes;

void sieveOfEratosthenes()
{
    bool flag[mx+1];
    memset(flag,1,sizeof(flag));
    primes.push_back(2);

    flag[0]=flag[1]=false;

    for(int i=4 ; i<=mx ; i+=2)
    {
        flag[i]=false;
    }

    for(int i=3 ; i<=mx ; i+=2)
    {
        if(flag[i]==true) /// i is prime
        {
            primes.push_back(i);
            for(int j=i+i ; j<=mx ; j=j+i)
            {
                flag[j]=false; ///j is not prime
            }
        }
    }
}


void segmentedSieve(ll L, ll R)
{
    bool isPrime[R-L+1]; //declare an array of 10^5 limit or less
    memset(isPrime,1,sizeof(isPrime));

    if(L==1)
        isPrime[0]=false;
    for(int i=0 ; primes[i]*primes[i]<=R ; i++)
    {
        ll curPrime=primes[i];
        ll base=curPrime*curPrime;
        if(base<L)
        {
            base=((L+curPrime-1)/curPrime)*curPrime;
        }
        for(ll j=base ; j<=R ; j+=curPrime)
            isPrime[j-L]=false;
    }
    for(int i=0 ; i<=R-L ; i++)
    {
        if(isPrime[i]==true)
            cout<<L+i<<" ";
    }
    cout<<endl;
}
int main()
{
    sieveOfEratosthenes();
    ll L,R;
    cout<<"L = ";
    cin>>L;
    cout<<"R = ";cin>>R;
    segmentedSieve(L,R);
    return 0;
}
