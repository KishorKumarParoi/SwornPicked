//22-09-19 3.42pm
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int n,t,q;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    cin>>q;
    while(q--)
    {
        int luchu;
        cin>>luchu;

        int low = lower_bound(v.begin(),v.end(),luchu)-v.begin();
        int up  =upper_bound(v.begin(),v.end(),luchu)-v.begin();

        if(low==0)
            cout<<"X ";
        else
            cout<<v[low-1]<<" ";

        if(up==n)
            cout<<"X"<<endl;
        else
            cout<<v[up]<<endl;
    }
    return 0;
}
