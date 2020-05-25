//8-3-20
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
#define _fastio  ios::sync_with_stdio(false); cin.tie(0);

using namespace std;


int main()
{
    // _fastio
    //open
    //close
    //printf("I Will Be a RED Coder By this year\n");
    // My Dream Is to Become LGM oneday . I will never go back on my words. That's my ninja Way.

    int t;
    cin>>t;

    while(t--)
    {
        int n,i,j,f=0;
        cin>>n;

        vector<int>v(n),odd,even;

        For(i,n)
        {
            cin>>v[i];
            if(v[i]%2==1)
                odd.pb(i+1);
            else
                even.pb(i+1);
        }

        if(even.size()==0 && odd.size()==1)
        {
            cout<<-1<<endl;
        }

        else if(even.size()>0)
        {
            cout<<1<<endl;
            cout<<even[0]<<endl;
        }
        else
        {
            cout<<2<<endl;
            cout<<odd[0]<< " "<<odd[1]<<endl;
        }
    }

    return 0;
}
