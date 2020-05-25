//11-19-19 12.32pm
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


    int n,i;
    cin>>n;
    set<pair<string,string> >st;

    for(i=0; i<n; i++)
    {
        string x,y;
        cin>>x>>y;
        st.insert(make_pair(x,y));
    }

    cout<<st.size()<<endl;
    return 0;
}


