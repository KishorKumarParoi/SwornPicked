//5-11-19 5.20am
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int t,n;
    cin>>n;
    int h[n+5],a[n+5];
    for(int i=1; i<=n; i++)
    {
        int x,y;
        cin>>h[i]>>a[i];
    }

    int cnt=0;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if((i!=j) && (h[i]==a[j]))
                cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
