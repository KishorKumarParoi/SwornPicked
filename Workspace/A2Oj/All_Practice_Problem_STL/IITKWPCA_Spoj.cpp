//22-11-19
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
#define _fastio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define PRINT(v)   for(auto x : v) {cout<<x<<" ";}  cout<<endl;
using namespace std;

int main()
{
    // open;
    //close;
    _fastio;

    int t;
    scl(t);
    while(t--)
    {
        string s;
        getline(cin,s);
        int sz=(int)s.size();

        string str;
        set<string>st;

        For(i,sz)
        {
            if(s[i]=='*'&& s[i+1]=='*')
            {
                s.erase(s.begin()+i+1);
                i--;
            }
        }

        cout<<s<<endl;
        reverse(all(s));
        cout<<s<<endl;

        For(i,sz)
        {
            if(s[i]!='*')
                str+=s[i];

            if(s[i]=='*' || (i==sz-1))
            {
                cout<<str<<endl;
                if(st.count(str))
                    continue;

                str.clear();
            }
        }

        PRINT(st);
        cout<<st.size()<<endl;
    }
    return 0;
}


