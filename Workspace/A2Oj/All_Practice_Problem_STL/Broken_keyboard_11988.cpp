//11-18-19 2.10pm
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


    string s;
    while(cin>>s)
    {
        list<char>kishor;
        auto it= kishor.begin();

        int sz=(int)s.size();
        for(int i=0; i<sz; i++)
        {
            if(s[i]=='[')
                it=kishor.begin();
            else if(s[i]==']')
                it=kishor.end();
            else
                kishor.insert(it,s[i]);
        }

        for(auto it=kishor.begin(); it!=kishor.end(); it++)
            cout<<*it;
        cout<<endl;
    }
    return 0;
}
