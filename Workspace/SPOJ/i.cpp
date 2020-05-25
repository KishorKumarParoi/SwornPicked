#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int n,i,cnt;
    cin>>n;
    for(i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(i=0; i<n-1; i++)
    {
        int cnt=0;
        //cout<<"v[i]+i+1 "<<v[i]+i+1<<endl;
        for(int j=i+1; j<min((v[i]+i+1),n); j++)
        {
            if(v[j]>v[i])
                break;
            else
                cnt++;
        }
        cout<<cnt<< " ";
    }
    cout<<0;
    cout<<endl;
}
