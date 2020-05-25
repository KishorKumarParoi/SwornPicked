#include<bits/stdc++.h>
using namespace std;
#define eb emplace_back
#define mx 100009
typedef long long int ll;
vector<int>primes;
bool Status[1100002];
vector<int>pr;
void Normal_Sieve(int N)
{
    //int N =1000000;
    int i,j,sq= sqrt(N*1.);
    for(i=4; i<=N; i+=2)
        Status[i]=1;
    pr.eb(2);
    for(i=3; i<=sq; i+=2)
    {
        if(Status[i]==0)
        {
            //pr.eb(i);
            for(j=i*i; j<=N; j+=i)
            {
                Status[j]=1;
            }
        }
    }
    Status[1]=1;
    for(i=3; i<=N; i+=2)
    {
        if(Status[i]==0)
            pr.eb(i);
    }
    for(auto i : pr)
        cout<<i<<" ";
    cout<<endl;
}

/*--------------Bitwise Sieve------------*/
#define M 10000000000
bool Check(int N,int pos)
{
    //cout<<"pos = "<<(N&(1<<pos));
    return (bool)(N & (1<<pos));
}
int Set(int N,int pos)
{
    // cout<<"setpos = "<<(N|(1<<pos)):
    return N= N|(1<<pos);
}

/*-------------------Memory Efficiet------------------*/

int status[(M/32)+2];

void Bitsieve(int N )
{
    vector<int>p;
    int i, j, sqrtN;
    sqrtN =  sqrt( N *1.);
    for( i = 3; i <= sqrtN; i += 2 )
    {
        if( Check(status[i>>5],i&31)==0)
        {
            // p.push_back(i);
            for( j = i*i; j <= N; j += (i<<1) )
            {
                status[j>>5]=Set(status[j>>5],j & 31)   ;
            }
        }
    }
    p.eb(2);
    for(i=3; i<=N; i+=2)
    {
        if(Check(status[i>>5],i&31)==0)
            p.eb(i);
    }
    for(auto k : p)
    {
        cout<<k<< " ";
    }
    cout<< endl;
}

void Sieve_Of_Eratosthenas()
{
    bool flag[mx+1];
    memset(flag,1,sizeof(flag));
    primes.eb(2);
    flag[0]=flag[1]=false;
    for(int i=4; i<=mx; i+=2)
        flag[i]=false;
    for(int i=3; i<=mx; i+=2)
    {
        if(flag[i]==true)
        {
            primes.eb(i);
            for(int j=i*i; j<=mx; j+=i)
            {
                flag[j]=false;
            }
        }
    }
}

void segmentedSieve(ll L,ll R)
{
    bool isPrime[R-L+1];
    memset(isPrime,1,sizeof(isPrime));
    if(L==1)
        isPrime[0]=false;
    for(ll i=0; primes[i]*primes[i]<=R; i++)
    {
        ll curPrime=primes[i];
        ll base=curPrime*curPrime;
        if(base<L)
            base=((L+curPrime-1)/curPrime)*curPrime;
        for(ll j=base; j<=R; j+=curPrime)
            isPrime[j-L]=false;
    }
    for(ll i=0; i<=R-L; i++)
    {
        if(isPrime[i]==true)
            cout<<L+i<< " ";
    }
    cout<<endl;
}

int main()
{
    int L,R,N;
    Sieve_Of_Eratosthenas();
    cin>>L>>R>>N;
    segmentedSieve(L,R);
    Bitsieve(N);
    Normal_Sieve(N);
}
