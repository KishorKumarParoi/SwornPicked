//11-08-19 11.10am
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t,kase=1;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<ll,string>ans;
        map<ll,ll>mp;
        ll idx;
        for(int i=0; i<n; i++)
        {
            string nam;
            int x,y,z;
            cin>>nam>>x>>y>>z;
            idx=x*y*z;
            ans[idx]=nam;
            mp[idx]++;
        }
        printf("Case %d: ",kase++);
        if(mp[idx]==n)
        {
            cout<<"no thief"<<endl;
            continue;
        }
        vector<ll>v;
        for(auto x: ans)
        {
            if(kase=1)
                cerr<<x.first<<" "<<x.second<<endl;
            v.push_back(x.first);
        }
        cout<<ans[v[(int)v.size()-1]]<< " took chocolate from "<<ans[v[0]]<<endl;
    }
    return 0;
}
