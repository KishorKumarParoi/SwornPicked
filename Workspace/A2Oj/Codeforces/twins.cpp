#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0; i<n; i++)
        sum+=v[i];

    //cout<<sum<<endl;
    int S=sum/2;
    sort(v.begin(),v.end());
    int kishor=0;
    int cnt=0;
    for(int i=n-1; i>=0; i--)
    {
        kishor+=v[i];
        cnt++;
        if(kishor>S)
        {
            cout<<cnt<<endl;
            break;
        }
    }
    return 0;
}
