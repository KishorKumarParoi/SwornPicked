#include<bits/stdc++.h>

using namespace std;

int t,i,j,a,b,x,y,s;
int main()
{
    cin>>t;
    vector<int>v;
    while(t--)
    {
        cin>>a>>b;
        y-=a;
        y+=b;
        v.push_back(y);
    }
    sort(v.begin(),v.end());
    cout<<v[v.size()-1]<<endl;
    return 0;
}




