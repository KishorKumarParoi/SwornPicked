//2-11-19 4.47am
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<int>v;
    int i,n,ans;
    for(i=0; i<s.size(); i+=2)
    {
        v.push_back((s[i]));
    }
    sort(v.begin(),v.end());
    for(i=0; i<v.size()-1; i++)
    {
        cout<<v[i]-48<<"+";
    }
    cout<<v[v.size()-1]-48<<endl;
    return 0;
}
