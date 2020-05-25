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


int main()
{
    ll n;
    cin>>n;
    vector<ll>v;
    for(ll i=0; i<n; i++)
    {
        ll x;
        cin>>x;
        v.eb(x);
    }
    sort(v.begin(),v.end());

}
