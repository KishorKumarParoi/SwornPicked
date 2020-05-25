#include <bits/stdc++.h>
using namespace std;
/***template***/
#define ___                  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll                      int
#define dd                    double
#define scl(n)               scanf("%d",&n)
#define scl2(n,m)            scanf("%lld %lld",&n,&m)
#define scl3(n,m,l)          scanf("%lld %lld %lld",&n,&m,&l)
#define scl4(n,m,l,k)        scanf("%lld %lld %lld %lld",&n,&m,&l,&k)
#define scd(n)               scanf("%lf",&n)
#define pll                     pair<ll,ll>
#define pb                     push_back
#define uu                      first
#define vv                      second
#define For(i,n)             for(ll i=0;i<n;i++)
#define LOOP(i,n)            for(ll i=0;i<n;i++)
#define FOOR(i,a,b)          for(ll i=a;i<=b;i++)
#define sorted(s)              sort(s.begin(),s.end())
#define sortedd(s)           sort(s.begin(),s.end(),cmp)
#define reversed(s)          reverse(s.begin(),s.end())
#define contains(a,b)        (find((a).begin(), (a).end(), (b)) != (a).end())
#define mstt(a,b)               memset((a),(b),sizeof (a))
#define sz(x)                    (ll)x.size()
#define uniquee(x)             x.erase(unique(x.begin(), x.end()),x.end())
#define print_vector(v)      for(ll i=0;i<(v.size());i++)cout<<v[i]<<" ";
#define vll                         vector<ll>
#define MAXN                 100005
#define pi                         3.1415926536
#define mod                      1000000007
#define eps                       0.0000000001
#define inf                        1e18
#define FILE                 freopen("in.txt","r",stdin);
/****only for priority queue******/
/*struct node
{
    ll nod,d;
    node(ll a,ll b)
    {
        nod=a;
        d=b;
    }
    bool operator<(const node &p)const
    {
        return p.d<d;
    }
};*/

void read(ll &a)
{
    a=0;
    char c=getchar();
    while(c<'0'||c>'9')
    {
        c=getchar();
    }
    while(c>='0'&&c<='9')
    {
        a=(a<<1)+(a<<3)+c-'0';
        c=getchar();
    }
}

ll Set(ll n,ll pos)
{
    return n=n|(1LL<<pos);
}
ll reset(ll n,ll pos)
{
    return n=n&~(1LL<<pos);
}
bool check(ll n,ll pos)
{
    return (bool)(n&(1LL<<pos));
}
ll msb(ll mask)
{
    return (mask&(-mask));
}
ll cnt_on(ll mask)
{
    return __builtin_popcountll(mask);
}

ll mul(ll a,ll b)
{
    ll c;
    c = (a%mod * b%mod)%mod;
    return c;
}
ll add(ll a,ll b)
{
    ll c;
    c = (a%mod + b%mod)%mod;
    return c;
}
ll sub(ll a,ll b)
{
    ll c;
    c = ((a%mod - b%mod)%mod + mod)%mod;
    return c;
}
ll power(ll x,ll y)
{
    ll res = 1;
    x = x;
    while (y > 0)
    {
        if (y & 1)
            res = (res*x);
        y = y>>1;
        x = (x*x);
    }
    return res;
}
long long exgcd(long long x, long long y, long long &a, long long &b)
{
    // ax + by = gcd(x,y)
    int flag = 0;
    long long t, la = 1, lb = 0, ra = 0, rb = 1;
    while(x%y)
    {
        if(flag == 0)
            la -= x/y*ra, lb -= x/y*rb;
        else
            ra -= x/y*la, rb -= x/y*lb;
        t = x, x = y, y = t%y;
        flag = 1 - flag;
    }
    if(flag == 0)
        a = ra, b = rb;
    else
        a = la, b = lb;
    return y;
}
/***template***/

ll n,q;
vector<ll>v;

int main()
{

    scl(n);
    scl(q);
    For(i,n)
    {
        int a;
        scl(a);
        v.pb(a);
    }
    For(i,q)
    {
        int typ;
        scl(typ);
        if(typ==1)
        {
            int k,x;
            scl(k);
            scl(x);
            k--;
            if(k>v.size())
                continue;
            if(k<v.size())
                v.insert(v.begin()+k, x);
            if(k==v.size())
                v.pb(x);
        }
        if(typ==2)
        {
            int k;
            scl(k);
            k--;
            if(k>=v.size())
                continue;
            v.erase(v.begin()+k);
        }
        if(typ==3)
        {
            int k;
            scl(k);
            k--;
            printf("%d\n",v[k]);
        }
    }
    return 0;
}
