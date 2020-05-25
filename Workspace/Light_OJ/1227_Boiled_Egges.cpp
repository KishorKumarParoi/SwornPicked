#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int t,n,p,q,i,w=0;
    int kase=1;
    cin>>t;
    while(t--)
    {
        cin>>n>>p>>q;
        for( i=0; i<n; i++)
        {
            int num;
            cin>>num;
            v.push_back(num);
        }
        for(i=0; i<n; i++)
        {
            w+=v[i];
            if(i>=p || w>q)
                break;
        }
        printf("Case %d: %d\n",kase++,i);
        w=0;
        v.clear();
    }
    return 0;
}
