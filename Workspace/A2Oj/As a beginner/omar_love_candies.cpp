//1-11-19 4.36am
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        map< char, int>mp;
        cin>>s;
        int i,n=s.size();
        for(i=0; i<n; i++)
        {
            mp[s[i]]++;
        }
        vector<int>v;
        for(auto x:mp)
        {
            v.push_back(x.second);
        }
        sort(v.begin(),v.end());
        int kishor=v[v.size()-1];
        for(auto x:mp)
        {
            if(x.second==kishor)
                cout<<x.second<<" "<<x.first<<endl;
            break;
        }
    }
    return 0;
}
