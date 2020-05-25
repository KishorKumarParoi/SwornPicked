#include<bits/stdc++.h>
using namespace std;
#define eb emplace_back
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,m,n;
   vector<int>v;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            int x;
            scanf("%d",&x);
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        for(vector<int>::iterator it=v.begin();it<v.end();it++)
            cout<<*it<<" ";
        cout<<endl;
    }
}
