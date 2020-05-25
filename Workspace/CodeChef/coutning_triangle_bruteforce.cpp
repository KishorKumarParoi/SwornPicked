#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());

    int cnt=0;
    for(int i=0; i<v.size(); i++)
    {
        for(int j=i+1; j<v.size(); j++)
        {
            for(int k=j+1; k<v.size(); k++)
            {
                if((v[j]+v[k])>v[i] && (v[j]+v[k]!=v[i] && v[i]+v[j]!=v[k]  &&  v[i]+v[k]!=v[j]))
                {
                    cout<<v[i]<<" "<<v[j]<<" "<<v[k]<<endl;
                    cnt++;
                }
            }
        }
    }
    cout<<cnt<<endl;
}
