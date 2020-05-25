//19-11-19 8.44am
#include<bits/stdc++.h>

#define Pi acos(-1.0)
#define ll long long
#define scl scanf("%d",&l)
#define scll scanf("%lld", &l)

#define pll pair<ll,ll>
#define pb push_back
#define eb emplace_back

#define all(c) (c).begin(),(c).end()
#define open  freopen("input.txt","r",stdin)
#define close freopen ("output.txt","w",stdout)
#define _fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;

int main()
{
    // open;
    //close;
    _fastio;

    int n,q,i;

    map<string,string>mp;
    pair<string,string>p;

    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        string x,y;
        getline(cin,x);
        getline(cin,y);
        mp[x]=y;
    }

    scanf("%d",&q);
   // for(auto x : mp)
        //cout<<x.first<<" = "<<x.second<<endl;

    for(i=0; i<q; i++)
    {
        string s;
        getline(cin,s);
        cout<<mp[s]<<endl;
    }
    return 0;
}


