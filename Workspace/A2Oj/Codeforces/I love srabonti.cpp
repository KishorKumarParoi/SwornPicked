
#include<bits/stdc++.h>

using namespace std;

int t,i,j,a,b,x,y,s,mx,mn;
int main()
{
    int n;
    vector<int>v;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>x;
        v.push_back(x);
    }

    s=0;y=0;
    mx=v[0];
    mn=v[0];
    for(i=0; i<n-1; i++)
    {
        //cout<<mx<<endl;
        if(v[i+1]>mx)
        {
            mx=v[i+1];
            s++;
        }
           if(v[i+1]<mn)
        {
            mn=v[i+1];
            y++;
        }
    }
    cout<<(y+s)<<endl;
    return 0;
}





