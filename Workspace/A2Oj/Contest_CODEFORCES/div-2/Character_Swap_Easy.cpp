//7-11-19 3.48am
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,cnt,kishor;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string a,b;
        cin>>a>>b;
        vector< pair<char,char> > v;
        for(i=0; i<n; i++)
        {
            if(a[i]!=b[i])
            {
                v.emplace_back(a[i],b[i]);
            }
        }

       // cout<<v.size()<<endl;

        if(v.size()==2 && (v[0].first==v[1].first) && (v[0].second==v[1].second))
            cout<< "YES\n";
        else
            cout<< "NO\n";
    }
    return 0;
}
