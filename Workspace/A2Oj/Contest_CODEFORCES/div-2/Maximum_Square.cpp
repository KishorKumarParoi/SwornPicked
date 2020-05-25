//7-11-19 3.26am
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int>v(n),v1(n);
        for(i=0; i<n; i++)
            cin>>v[i];
        sort(v.begin(),v.end());
        int best=0;
        for(i=n-1; i>=0; i--)
        {
            if(best<v[i])
                best++;
        }
        cout<<best<<endl;
    }
    return 0;
}
