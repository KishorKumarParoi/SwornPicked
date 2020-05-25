//26-11-19
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
#define fastio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define PRINT(v)   for(auto x : v) { {cout<<x<<" ";}  cout<<endl;}
using namespace std;

int main()
{
    // open;
    // close;
    // fastio

    int n,x;
    scl(n);
    scl(x);


    while(n--)
    {
        int a,b;
        scl(a);
        scl(b);

        if(!(a!=x && b!=x && a!=7-x && b!=7-x ) )
        {
            puts("NO");
            return 0;
        }

    }


    puts("YES");


    return 0;
}

