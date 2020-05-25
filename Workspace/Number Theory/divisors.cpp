#include<bits/stdc++.h>
using namespace std;

#define ll long long int
vector<ll>v[1100000];

void divisior(ll n)
{
    ll i,j;
    for(i=1; i<=n; i++)
    {
        for(j=i; j<=n; j+=i)
        {
            v[j].push_back(i);
        }
    }

    for(j=1; j<=n; j++)
    {
        cout<<j<<" = ";
        for(i=0; i<v[j].size(); i++)
        {
            cout<<v[j][i]<< " ";
        }
        cout<<endl;
    }
}

int main()
{
    ll n;
    while(cin>>n)
    {
        divisior(n);
    }
}
