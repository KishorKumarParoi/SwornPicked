//17-2-20
#include<bits/stdc++.h>

#define Pi acos(-1.0)
#define U unsigned
#define ll long long
#define uu first
#define vv second
#define endl "\n"
#define scu(n) scanf("%u",&n)
#define scl(n) scanf("%d",&n)
#define scll(n) scanf("%lld",&n)

//Vector Macros
#define pb push_back
#define eb emplace_back
#define ALL(v) v.begin(),v.end()
#define UNIQUE(v) v.erase(unique(ALL(v)),v.end())
#define MIN(c) *min_element(ALL(c))
#define MAX(c) *max_element(ALL(c))
#define SUM(c) accumulate(ALL(c),0)

//Loop Macros
#define FOR(i,a,b) for(ll i=a;i<=b;i++)
#define rep(i,a,b)  for(int i=a;i<=b;i++)
#define For(i,n) for(int i=0;i<n;i++)

//Debug Macros
#define deb(a) cout << #a << " : " << a << " ";
#define debln(a) cout<< #a <<" : " << a << endl;
#define open  freopen("input.txt","r",stdin);
#define close freopen ("output.txt","w",stdout);

//Print Macros
#define print(v)  for(auto x : v) {  cout<<x<<" ";   }  cout<<endl;
#define PRINT(v)  for(auto x : v) { cout<<x.uu<<" "<<x.vv<<endl; }
#define _fastio  ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;


int main()
{
    _fastio
    //open
    //close
    //printf("I Will Be a RED Coder By this year\n");

    int n =5,x,y;

    int a[6][6];

    For(i,5)
    {
        For(j,5)
        {
            cin>>a[i][j];
            if(a[i][j]==1)
            {
                x= i;
                y=j;
            }
        }
    }

    //deb(x)
    //debln(y)
    cout<<abs(3-x-1)+abs(3-y-1)<<endl;

    return 0;
}





