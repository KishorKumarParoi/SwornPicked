//29-1-20
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

/*
ll for_binarySearch(ll a,ll b,ll aa[],ll x)
{
    while(a<=b)
    {
        ll mid=(a+b)/2;
        if(aa[mid]==x)
            return 1;
        else if(aa[mid] > x)
            b=mid-1;
        else
            a=mid+1;
    }
    return -1;
}
ll lwr_bound(ll x)
{
    ll idx=-1,mid,a=0,b=n-1;

    while(a<=b)
    {
        mid=a+(b-a)/2;

        if(aa[mid]==x)
        {
            idx = mid;
            b = mid -1 ;
        }
        else if(aa[mid]<x)
            a = mid+1;
        else
            b = mid-1;
    }

    return aa[a-1] ;
}

ll uppr_bound(ll x)
{
    ll idx=-1,mid,a=0,b=n-1;

    while(a<=b)
    {
        mid=a+(b-a)/2;
        if(aa[mid]==x)
        {
            idx = mid;
            a=mid+1;
        }
        else if(aa[mid]<x)
            a = mid+1;
        else
            b = mid-1;
    }
    return aa[a] ;
}
ll for_prime(ll x)
{
    for (ll i=2; i*i<=x; i++)
    {
        if(x%i==0)
            return 0;
    }
    return 1;
}

ll for_big_mod(ll b,ll p,ll m)
{
    if(p==0)
        return 1;
    else if(p%2==0)
    {
        ll k=for_big_mod(b,p/2,m);
        return (k*k)%m;
    }
    else
        return ((b%m)*(for_big_mod(b,p-1,m)))%m;
}
ll for_josephus(ll n,ll k)
{
    if(n==1)
        return 1;
    return (for_josephus(n-1,k)+k-1)%n+1;
}
ll for_gcdExtended(ll a,ll b,ll *x,ll *y)
{
    if(a==0)
    {
        *x=0;
        *y=1;
        return b;
    }
    ll x1,y1;
    ll gcd=for_gcdExtended(b%a,a,&x1,&y1);
    *x=y1-(b/a)*x1;
    *y=x1;
    return gcd;
}
*/

#define fastio  ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;

/*
4

30 40 10

12.619429 8.163332 3

10 10 3

10 10 1
*/

double crossed_ladder_theorem(double x,double y,double d)
{
    double h1,h2,h;

    h1 = sqrt(x*x - d*d);
    h2 = sqrt(y*y - d*d);

    h = (h1*h2)/(h1+h2);

    return h ;
}

double distance(double x,double y,double c)
{
    double low = 0.0, high = min(x,y),mid, d;
    for(int i=1; i<=100; i++)
    {
        mid = (high+low)/2.0;
        d = mid;

        if(crossed_ladder_theorem(x,y,d) < c )
            high = mid;
        else
            low = mid;
    }

    return d;
}

int main()
{
    //open
    //close
    // fastio

    int t,kase=1;
    scl(t);

    while(t--)
    {
        double x,y,c;
        cin>>x>>y>>c;

        printf("Case %d: ",kase++);
        cout<<setprecision(10)<<distance(x,y,c)<<endl;
    }

    return 0;
}




