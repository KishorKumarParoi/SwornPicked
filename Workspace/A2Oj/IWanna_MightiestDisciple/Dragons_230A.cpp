//6-11-19 7.56am
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int kishor,n,i,j;
    cin>>kishor>>n;
    pair<int,int> v[n+10];

    for(i=0; i<n; i++)
    {
        cin>>v[i].first>>v[i].second;
    }

    sort(v,v+n);

    int cnt=0;
    for(i=0; i<n; i++)
    {
        if(kishor>v[i].first)
        {
            kishor+=v[i].second;
            cnt++;
        }
        else
        {
            cout<<"NO\n";
            break;
        }
    }
    if(cnt==n)
        cout<<"YES\n";
    return 0;
}
