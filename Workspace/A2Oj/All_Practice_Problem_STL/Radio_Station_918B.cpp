//19-11-19 12.19pm
#include<bits/stdc++.h>

#define Pi acos(-1.0)
#define ll long long
#define scl scanf("%d",&l)
#define scll scanf("%lld", &l)

#define pll pair<ll,ll>
#define pb push_back
#define mp map<int,int>
#define pii pair<int,int>
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

    int i,j,n,m;
    cin>>n>>m;
    map<string,string>m1;
    vector< pair< string,string> >m2(m);

    for(i=0; i<n; i++)
    {
        string x,y;
        cin>>x>>y;
        m1[y]=x;
    }

    for(i=0; i<m; i++)
    {
        cin>>m2[i].first>>m2[i].second;
    }

    for(auto &x:m2)
    {
        string kishor= x.second;
        auto it1=kishor.end()-1;
        kishor.erase(it1);
        //cout<<kishor<<endl;
        cout<<x.first<<" "<<x.second<<" #"<<m1[kishor]<<endl;
    }
    cout<<endl;

    return 0;
}


