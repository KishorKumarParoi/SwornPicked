//27-08-19 8.05pm
#include<bits/stdc++.h>
using namespace std;

#define ll                                       long long
#define eb                                     emplace_back
#define pii                                     pair<int,int>
#define pll                                      pair<ll,ll>
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
#define sorted(v)                            sort(v.begin(),v.end())
int main()
{
    _fastio;
    //open;
    //close;
    ll kase=1,t,i,j,k,n,x,y,z,q,m,cnt;
    string a;
    ll b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        ll len=a.size();
        if(a[i]=='-')
            j=1;
        else
            j=0;
        x=0;
        for(; j<len; j++)
        {
            x=(x*10)+(a[j]-'0');
            x=x%b;
        }
        //cout<<x<<endl;
        if(x)
            printf("Case %lld: not divisible\n",kase++);
        else
            printf("Case %lld: divisible\n",kase++);
    }
    return 0;
}

/// DO PEN AND PAPERWORK AFTER READING QUESTIONS CAREFULLY
/// Be confident to Solve if others can do.***
/// Common sense: do something instead of nothing
/// Even a single second counts...
/// be super cool, super patient and super focused
