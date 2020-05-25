#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v{0,5,1};
    for(auto i :v)
        cout<<i<<" ";
    v[v.size()-1]=1;
    cout<<v[v.size()-1]<<endl;
    cout<<endl;
}
