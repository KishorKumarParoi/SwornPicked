//
#include<bits/stdc++.h>
#include<cstring>
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

int main()
{
    _fastio;
    //open;
    //close;
    ll kase=1,t,i,j,k,n,x,y,z,q,m,cnt;
    cin>>n>>t;
    string s;
    cin>>s;
    while(t--)
    {
        ll l,r,k;
        cin>>l>>r>>k;
        //cout<<s<<endl;
        string S;
        vector<char>v;
        for(i=l-1; i<r; i++)
        {
            char x=s[i];
            v.push_back(x);
        }

        for(j=0; j<l-1; j++)
            S+=s[j];
        if(k==1)
        {
            sort(v.begin(),v.end());
            for(auto i : v)
                S+=i;
        }
        else
        {
            sort(v.begin(),v.end());
            reverse(v.begin(),v.end());
            for(auto i : v)
                S+=i;
        }
        for(j=r; j<n; j++)
            S+=s[j];
        s=S;
        v.clear();
    }
    cout<<s<<endl;
    return 0;
}

/// DO PEN AND PAPERWORK AFTER READING QUESTIONS CAREFULLY
/// Be confident to Solve if others can do.***
/// Common sense: do something instead of nothing
/// Even a single second counts...
/// be super cool, super patient and super focused

