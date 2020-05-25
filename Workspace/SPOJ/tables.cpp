#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int n,k,s,i;
    cin>>n>>k>>s;
    for(i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    int cnt=0,sum=0;
    for(i=0; i<n; i++)
    {
        sum+=v[i];
        cnt++;
        if(sum>18)
            break;
    }
    cout<<cnt<<endl;
}
