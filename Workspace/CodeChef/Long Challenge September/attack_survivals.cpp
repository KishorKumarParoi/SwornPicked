#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,q;
    int i,j,x,y,a,b,c,m;
    cin>>n>>k>>q;
    vector<int>v(n,k);
    for(j=0; j<n; j++)
    {
        for(i=0; i<q; i++)
        {
            cin>>x;
            v[x-1]+=1;
            v[j]
        }
    }

    for(i=0; i<n; i++)
    {
        if(v[i]-(k+q)<0)
            cout<< "No\n";
        else
            cout<< "Yes\n";
    }
    return 0;
}
