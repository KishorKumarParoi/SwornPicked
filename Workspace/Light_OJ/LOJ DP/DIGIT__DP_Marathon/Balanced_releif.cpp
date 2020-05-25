//24-08-19 10.43pm
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
    ll kase=1,t,i,j,k,n,x,y,z,p,q,m,cnt,sum=0;
    cin>>n>>m;
    vector<ll>a,b;
    for(i=0; i<n; i++)
    {
        ll x;
        cin>>x;
        a.eb(x);
    }
    for(i=0; i<m; i++)
    {

        ll x;
        cin>>x;
        b.eb(x);
    }
    ll l,r;
    cin>>l>>r;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    //cout<<b[0]<<endl;
    for(i=0; i<a.size(); i++)
    {
        //cout<<(max(l,r)-a[i])<< " ";
        //cout<<(min(l,r)-a[i])<<endl;
        p=upper_bound(b.begin(),b.end(),(max(l,r)-a[i]))-b.begin();
        q=lower_bound(b.begin(),b.end(),(min(l,r)-a[i]))-b.begin();
        //cout<<p<< " "<< q<<endl;
        sum+=(p-q);
        //cout<<sum<<endl;
    }
    cout<<sum<<endl;
    return 0;
}

/// DO PEN AND PAPERWORK AFTER READING QUESTIONS CAREFULLY
/// Be confident to Solve if others can do.***
/// Common sense: do something instead of nothing
/// Even a single second counts...
/// be super cool, super patient and super focused


