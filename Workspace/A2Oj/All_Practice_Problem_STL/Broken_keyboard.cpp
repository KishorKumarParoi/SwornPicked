//
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

    string k;
    while(cin>>k)
    {
        list<char>dq;
        int sz=(int)k.size();

        auto it=dq.begin();

        for(int i=0; i<sz; i++)
        {
            if(k[i]=='[')
                it=dq.begin();
            else if(k[i]==']')
                it=dq.end();
            else
                dq.insert(it,k[i]);

            for(auto it=dq.begin(); it!=dq.end(); it++)
                cout<<*it;
            cout<<endl;
        }

        for(auto it=dq.begin(); it!=dq.end(); it++)
            cout<<*it;
        cout<<endl;
    }
    return 0;
}

