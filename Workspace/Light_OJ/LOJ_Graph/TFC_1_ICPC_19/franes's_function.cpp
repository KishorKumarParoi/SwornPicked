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

vector<ll>v;
int main()
{
    _fastio;
    //open;
    //close;
    ll kase=1,t,i,j,k,n,x,y,z,q,m,cnt;
    cin>>n;
    ll sq=sqrt(1.0*n);
    //cout<<sq<<endl;
    ll flag=0;
    for(i=2; i<=sq; i++)
    {
        if(n%i==0)
        {
            z=(n/i);
            v.push_back(z);
            flag=0;
            break;
        }
        else
            flag=1;
    }
    if(flag==1 || n==1)
        cout<<n-1<<endl;
    else
        cout<<n-v[0]<<endl;
    return 0;
}

/// DO PEN AND PAPERWORK AFTER READING QUESTIONS CAREFULLY
/// Be confident to Solve if others can do.***
/// Common sense: do something instead of nothing
/// Even a single second counts...
/// be super cool, super patient and super focused

