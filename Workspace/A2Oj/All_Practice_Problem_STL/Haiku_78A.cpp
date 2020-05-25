//21-11-19
#include<bits/stdc++.h>

#define Pi acos(-1.0)
#define ll  int
#define scl(n) scanf("%d",&n)
#define scll(n) scanf("%lld",&n)
#define pb push_back
#define eb emplace_back

#define For(i,n)  for(ll i=0;i<n;i++)
#define FOR(i,n) for(ll i=1;i<=n;i++)
#define FOOR(i,n) for(ll i=a;i<=b;i++)
#define all(c) (c).begin(),(c).end()
#define open  freopen("input.txt","r",stdin)
#define close freopen ("output.txt","w",stdout)
#define _fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;

char s[1<<20];
set<char> T = {'a','e','i','o','u'};

int nm()
{
    fgets(s,1<<20,stdin);
    int S=0;
    int L=strlen(s);

    For(i,L)
    S+=T.count(s[i]);
    return S;
}

int main(void)
{
    // open;
    //close;
    //_fastio;

    puts(nm()==5 && nm()==7 && nm()==5 ?  "YES" : "NO");
    return 0;
}


