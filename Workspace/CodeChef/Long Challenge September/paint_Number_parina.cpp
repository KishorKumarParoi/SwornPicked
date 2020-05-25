#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    vector<int>v;
    cin>>n;
    for(i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    int cnt=0;
    sort(v.begin(),v.end());
    for(i=0; i<v.size(); i++)
    {
        if(v[i]==0)
            continue;
        else
        {
            //cout<<v[i]<<" "<<v[j]<<endl;
            for(j=i+1; j<n; j++)
            {
                //cout<<v[i]<<" "<<v[j]<<endl;
                if(v[j]%v[i]==0)
                {
                    v[j]=0;
                }
                else
                    continue;
            }
            cnt++;
            //cout<<cnt<<endl;
        }
    }
    cout<<cnt<<endl;
}
