//2-3-20
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

    int n,t;


    scl(n);

    vector<int> r(n),b(n);

    For(i,n)
    scl(r[i]);

    For(i,n)
    scl(b[i]);

    int cnt=0,zerro=0,x=0,y=0;
    For(i,n)
    {
        if(r[i]==1)
            x++;
        if(b[i]==1)
            y++;

        if(b[i]==r[i]&& r[i]==1)
            cnt++;
        if(b[i]==r[i]&& r[i]==0)
            zerro++;
    }

    if(zerro==n || cnt==n|| x==0)
        cout<< -1<<endl;
    else
    {
        if(cnt==0)
        {
            if(x<y)
                cout<< (y-x)+2<<endl;
            else if(x==y)
                cout<<2<<endl;
            else
                cout<< 1<<endl;
        }

        else
        {
            if(x>y)
                cout<<1<<endl;
            else if(x==y)
                cout<<2<<endl;
            else
            {
                if(x==1)
                    cout<<(y-cnt)+2<<endl;
                else
                    cout<< (y-cnt)+1<<endl;
            }
        }
    }


    return 0;
}

