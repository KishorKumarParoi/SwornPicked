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

int main()
{
    _fastio;
    //open;
    //close;
    ll kase=1,t,i,j,k,n,x,y,z,q=0,m,cnt=0;
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='R')
            ++q;
        else
            --q;
        if(q==4)
        {
            cnt++;
            q=0;
        }
        if(q==-4)
        {
            q=0;
        }
    }
    cout<<cnt<<endl;
    return 0;
}

/// DO PEN AND PAPER WORK AFTER READING QUESTIONS CAREFULLY
/// Be confident to Solve if other can do.***
/// Common sense : do something instead of nothing
/// Even a single second counts...
/// be super cool , super patient and super focused

