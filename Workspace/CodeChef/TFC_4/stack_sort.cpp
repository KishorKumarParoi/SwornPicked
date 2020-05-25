#include<bits/stdc++.h>
using namespace std;
vector<int>v;

int main()
{
    stack<int>s;
    int i;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int y;
        cin>>y;
        s.push(y);
    }
    while(!s.empty())
    {
        v.push_back(s.top());
        sort(v.begin(),v.end());
        cout<<v[v.size()-1]<<endl;
        s.pop();
    }
    cout<<endl;
}
