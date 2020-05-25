#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    int cnt=n;
    sort(v.begin(),v.end());
    for(auto i : v)
        cout<<i<< " ";
    cout<<endl;
    auto it = unique(v.begin(),v.begin()+n);
    v.resize(distance(v.begin(), it));
    for(auto i : v)
        cout<<i<< " ";
    cout<<endl;

    for(int i=0; i<n; i++)
    {
        if(v[i]%2==0)
        {
            int x=i;
            v.erase(v.begin()+i);
        }
    }
    for(auto i : v)
        cout<<i<< " ";
    cout<<endl;

    // cout<<cnt<<endl;q
    return 0;
}
