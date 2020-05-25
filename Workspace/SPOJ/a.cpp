//
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

bool rec_pal(string s,int b,int e)
{
    if(b>e)
        return 1;
    if(s[b]!=s[e])
        return 0 ;
    return rec_pal(s,b+1,e-1);
}
int main()
{
    _fastio;
    //open;
    //close;
    string s;
    cin>>s;
    int x=s.length()-1;
    int cnt=0;
    for(int i=x-1; i>=0; i--)
    {
        if(s[i]==s[x])
            cnt++;
        else
            break;
    }
    //cout<<cnt<<endl;
    if(rec_pal(s,0,x)==1)
        cout<<s<<endl;
    else
    {
        string s1=s;
        cout<<s;
        for(int i=x-1-cnt; i>=0; i--)
        {
            cout<<s[i];
        }
    }
    return 0;
}

/// DO PEN AND PAPERWORK AFTER READING QUESTIONS CAREFULLY
/// Be confident to Solve if others can do.***
/// Common sense: do something instead of nothing
/// Even a single second counts...
/// be super cool, super patient and super focused

