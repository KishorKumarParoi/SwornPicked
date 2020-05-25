//19-11-19 11.44pm
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


    int t,n,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        int x,y,z,diff;
        diff=abs(a-b);
        x=diff/5;
        diff-=x*5;

        //cout<<diff<<endl;
        diff=abs(diff);
        y=diff/2;
        diff-=y*2;

        //cout<<diff<<endl;

        diff=abs(diff);
        z=diff;
        cout<<x+y+z<<endl;
    }
    return 0;
}


