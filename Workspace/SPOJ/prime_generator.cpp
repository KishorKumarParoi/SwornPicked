#include<bits/stdc++.h>
using namespace std;

#define eb emplace_back
#define ll long long
#define mx 1000009  //sqrt(10^12)=10^6
vector<ll>primes;
ll i,j,k;
void Sieve_Of_Eratosthenas()
{
    bool flag[mx+1];
    memset(flag,true,sizeof(flag));  //soba age true kore nilam
    flag[0]=flag[1]=false;       // 0,1 prime na so false kore dilam
    primes.eb(2);     //2 k push korlqm


    for(i=4; i<=mx; i+=2)
        flag[i]=false;                                   //sokkol even number k false kore dilam

    for(i=3; i<=mx; i+=2)
    {
        if(flag[i]==true)                             //checkinng a number is prime or not                //pushing the prime number
        {
            primes.eb(i);                            //pushing prime number
            for(j=i+i; j<=mx; j+=i)              //prime number er multiple gula k false kore diyechi
                flag[j]=false;
        }
    }
}

void SegmentedSieve(ll L,ll R)
{
    bool isPrime[R-L+1];
    memset(isPrime,true,sizeof(isPrime));                  //true kore dilam initialize

    if(L==1)
        isPrime[0]=false;                                      //j-l=1-1=0

    for(i=0; primes[i]*primes[i]<=R; i++)
    {
        ll currprime=primes[i];                                //2 theke kata shuru korlam
        ll base=currprime*currprime;                       //4,6,8 esb agei kata hoye geche Sieve calanor somoy

        if(base<L)
            base=((L-1+currprime)/currprime)*currprime;             //(21-1+3)/3=7*3=21

        for(j=base; j<=R; j+=currprime)
            isPrime[j-L]=false;                                                    //31-29=2 no. index
    }
    for(i=0; i<=R-L; i++)
    {
        if(isPrime[i]==true)
            cout<<L+i<<" ";                     //2+29=31
    }
    cout<<endl;
}

int main()
{
    Sieve_Of_Eratosthenas();
    ll t,L,R;
    cin>>t;
    while(t--)
    {
        cin>>L>>R;
        SegmentedSieve(L,R);
    }
    return 0;
}
