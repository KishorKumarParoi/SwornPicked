//
#include<bits/stdc++.h>

#define Pi acos(-1.0)
#define ll long long
#define scl scanf("%d",&l)
#define scll scanf("%lld", &l)

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

    int n,i,k,m,cnt,ans,j;
    cin>>n;
    string s;
    vector<int>v(n);
    cin>>s;
    for(i=0; i<n; i++)
        cin>>v[i];

    map< pair<char,int>, int >mp;
    for(i=1; i<=n; i++)
        mp.insert({make_pair(s[i-1],i ), v[i-1]});


    for(auto &x : mp)
        cout<<x.first.first<<" "<<x.first.second<<" "<<x.second<<endl;
    cout<<endl;

    for(auto it=mp.begin();it!=mp.end();it++)
    {

    }
    return 0;
}


