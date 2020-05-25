//
#include<bits/stdc++.h>
using namespace std;

#define ll                                       long long
#define eb                                     emplace_back
#define pii                                     pair<int,int>
#define pII                                   pair<ll,ll>
#define mp                                     map<int,int>
#define _fastio                              ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define DB(x)                                cerr << __LINE__ << ": " << #x << " = " << (x) << endl
#define Pi                                      acos(-1.0)
#define open                                  freopen("input.txt","r",stdin)         //opening input file
#define close                                  freopen ("output.txt","w",stdout)     //opening output file
#define fori(i,n)                              for(int i=1;i<=n;++i)
#define forn(i,n)                             for(int i=0;i<n;++i)
#define sz(x)                                  int(x.size())
#define error(x)                              cout<<#x<<" "<<x<<endl

vector<int>primes;
int i,j,k;
void Sieve_Of_Eratosthenas(int mx)
{
    primes.clear();
    bool flag[mx+1];
    memset(flag,1,sizeof(flag));
    primes.eb(2);
    flag[0]=flag[1]=false;
    for(i=4; i<=mx; i+=2)
        flag[i]=false;
    for(i=3; i<=mx; i+=2)
    {
        if(flag[i]==true)
        {
            primes.eb(i);
            for(j=i*i; j<=mx; j+=i)
            {
                flag[j]==false;
            }
        }
    }
    for(auto i : primes)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}

int main()
{
    _fastio;
    //open;
    //close;
    ll kase=1,t,n,x,y,z,q,m,cnt;
    cin>>t;
    while(t--)
    {
        cnt=0;
        cin>>n;
        Sieve_Of_Eratosthenas(n);
        int sum=0;

    }
    return 0;
}

/// DO PEN AND PAPERWORK AFTER READING QUESTIONS CAREFULLY
/// Be confident to Solve if others can do.***
/// Common sense: do something instead of nothing
/// Even a single second counts...
/// be super cool, super patient and super focused


