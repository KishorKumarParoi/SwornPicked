//
#include<bits/stdc++.h>

#define Pi acos(-1.0)
#define ll long long
#define scl scanf("%d",&l)
#define scll scanf("%lld", &l)
#define pb push_back
#define eb emplace_back

#define all(c) (c).begin(),(c).end()
#define open  freopen("input.txt","r",stdin)
#define close freopen ("output.txt","w",stdout)
#define _fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;

int main()
{
    // open;
    //close;
    _fastio;

    int n,i;
    cin>>n;
    vector<int>v(n);

    int x=0;
    for(i=0; i<n; i++)
    {
        cin>>v[i];
        if(v[i]>0)
            x++;
    }
    if(x<2)
        cout<<-1<<endl;
    else
    {

    }

    return 0;
}



