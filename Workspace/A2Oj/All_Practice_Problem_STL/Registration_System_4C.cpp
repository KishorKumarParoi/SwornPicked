//21-11-19
#include<bits/stdc++.h>

#define Pi acos(-1.0)
#define ll long long
#define scl(n) scanf("%d",&n)
#define scll(n) scanf("%lld",&n)
#define pb push_back
#define eb emplace_back

#define For(i,n)  for(int i=0;i<n;i++)
#define FOR(i,n) for(ll i=0;i<n;i++)
#define FOOR(a,b) for(ll i=a;i<=b;i++)
#define all(c) (c).begin(),(c).end()
#define open  freopen("input.txt","r",stdin)
#define close freopen ("output.txt","w",stdout)
#define PRINT(v)   for(auto x : v) { {cout<<x<<" ";}  cout<<endl;}
using namespace std;

int main()
{
    // open;
    //close;

    int n;
    scl(n);
    map<string,int>mp;
    For(i,n)
    {
        string s;
        cin>>s;
        if(mp[s])
            cout<<s<<mp[s]<<endl;
        else
            cout<<"OK"<<endl;
        mp[s]++;
    }

    return 0;
}


