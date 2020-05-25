//11-4-20
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
using namespace std :: chrono;

#define scu(n)                     scanf("%u",&n)
#define scl(n)                     scanf("%d",&n)
#define scll(n)                     scanf("%lld",&n)
#define  maxN                     100000005
#define uu                           first
#define vv                           second
#define ll                            long long
#define U                             unsigned
#define pb                            push_back
#define mp                           make_pair
#define pii                           pair<int,int>
#define vi                             vector<int>
#define mii                            map<int,int>
#define Pi                              acos(-1.0)
#define endl                          "\n"
#define pqb                            priority_queue<int>
#define pqs                             priority_queue<int,vi,greater<int> >
#define setbits(x)                    __builtin_popcountll(x)
#define zrobits(x)                    __builtin_ctzll(x)
#define mod                              1000000007
#define inf                               1e18
#define ps(x,y)                          fixed<<setprecision(y)<<x
#define mk(arr,n,type)              type *arr=new type[n];
#define w(x)                             int x; cin>>x; while(x--)
mt19937                                  rng(chrono::steady_clock::now().time_since_epoch().count());

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

//Vector Macros
#define pb                                 push_back
#define eb                                  emplace_back
#define ALL(v)                           v.begin(),v.end()
#define UNIQUE(v)                    v.erase(unique(ALL(v)),v.end())
#define MIN(c)                          *min_element(ALL(c))
#define MAX(c)                          *max_element(ALL(c))
#define SUM(c)                          accumulate(ALL(c),0)

//Loop Macros
#define FOR(i,a,b)                       for(ll i=a;i<=b;i++)
#define rep(i,a,b)                         for(int i=a;i<=b;i++)
#define For(i,n)                            for(int i=0;i<n;i++)

//Debug Macros
#define deb(a)                             cout << #a << " : " << a << " ";
#define debln(a)                          cout<< #a <<" : " << a << endl;
//Print Macros
#define print(v)    for(auto x : v) {  cout<<x<<" ";   }  cout<<endl;
#define PRINT(v)  for(auto x : v) { cout<<x.uu<<" "<<x.vv<<endl;

/*
Time Calculation :
auto st = high_resolution_clock::now();
auto en = high_resolution_clock::now();
auto duration = duration_cast < milliseconds > (en-st);
cout<< "consumed time in ms " << duration.count() <<endl;
*/

bool isPrime[maxN];
vector<ll>primes;

void sieve()
{
    memset(isPrime,true,sizeof(isPrime));
    isPrime[0]=isPrime[1]=false;

    for(int i=0; i<maxN; i++)
    {
        if(isPrime[i])
        {
            primes.pb(i);
            for(int j = i<<1 ; j<maxN; j += i)
                isPrime[j]=false;
        }
    }
}

ll bipow(ll a,ll b)
{
    ll res = 1;

    while(b>0)
    {
        if(b&1)
            res = (res *a);
        a = (a*a);
        b>>=1;
    }
    return res;
}

ll SOD(ll n)
{
    ll temp = n,sum=1;

    for(int i=0; i<primes.size() && i*i<n; ++i)
    {
        ll cnt = 1;
        if(temp%primes[i]==0)
        {
            while(temp%primes[i]==0)
            {
                cnt++;
                temp/=primes[i];
            }
            sum*= (bipow(primes[i],cnt)-1) / (primes[i]-1);
        }
    }

    if(temp>1)
        sum*= (temp+1);
    return sum;
}

int main()
{

    //auto st = high_resolution_clock::now();
    sieve();
    int t;
    scl(t);

    while(t--)
    {
        ll n;
        scll(n);
        printf("%lld\n",SOD(n)-n);
    }
    //auto en = high_resolution_clock::now();
    //auto duration = duration_cast < milliseconds > (en-st);
    //cout<< "consumed time in ms " << duration.count() <<endl;
    return 0;
}

