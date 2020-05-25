#include<bits/stdc++.h>
using namespace std;

#define ll long long int

vector<ll>prime;
bool Status[1100000];

void Sieve()
{
    for(ll i=2; i<=10000000; i++)
    {
        if(Status[i]==0)
        {
            prime.push_back(i);
            for(ll j=i; j<10000000; j+=i*2)
            {
                Status[j]=1;
            }
        }
    }
}


int main()
{
    ll n;
    cin>>n;
    Sieve();
    for(ll i=0; i<prime.size(); i++)
    {

    }
}
