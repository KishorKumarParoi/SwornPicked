//10-08-19 7.40pm
#include<bits/stdc++.h>
#include<cmath>
#include<vector>
using namespace std;
#define ll long long int
int main()
{

    ll i,n;
    int t;
    cin>>t;
    int kase=1;
    while(t--)
    {
        vector<ll>v(4);
        cin>>v[0];
        cin>>v[1];
        cin>>v[2];
        sort(v.begin(),v.begin()+3);
        if((v[2]*v[2])==(v[0]*v[0])+(v[1]*v[1]))
            printf("Case %d: yes\n",kase++);
        else
            printf("Case %d: no\n",kase++);
    }
    return 0;
}
