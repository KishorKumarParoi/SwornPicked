//8-4-20
#include<bits/stdc++.h>

#define Pi acos(-1.0)
#define mod 1000000007
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
ll for_binarySearch(ll a,ll b,ll aa[],ll x){while(a<=b){ll mid=(a+b)/2;if(aa[mid]==x) return 1;else if(aa[mid] > x) b=mid-1;else a=mid+1;}return -1;}
ll lwr_bound(ll a,ll b,ll aa[],ll x){ll idx=-1,mid; while(a<=b){mid=a+(b-a)/2; if(aa[mid]>=x) { if(aa[mid]==x) idx = mid; b=mid-1;} else a = mid+1; } return idx ; }
ll uppr_bound(ll a,ll b,ll aa[],ll x){ll idx=-1,mid; while(a<=b){mid=a+(b-a)/2; if(aa[mid]<=x) { if(aa[mid]==x) idx = mid; a=mid+1;} else b = mid-1; }
return idx ;}
ll for_gcd(ll a,ll b){if(a==0) return b;else return for_gcd(b%a,a);}
ll for_prime(ll x){for (ll i=2;i*i<=x;i++){if(x%i==0) return 0;}return 1;}
void for_swap(char *x,char *y){char temp;temp=*x;*x=*y;*y=temp;}
ll for_big_mod(ll b,ll p,ll m){if(p==0) return 1;else if(p%2==0){ll k=for_big_mod(b,p/2,m);return (k*k)%m;}else return ((b%m)*(for_big_mod(b,p-1,m)))%m;}
ll for_josephus(ll n,ll k){if(n==1) return 1;return (for_josephus(n-1,k)+k-1)%n+1;}
ll for_gcdExtended(ll a,ll b,ll *x,ll *y){if(a==0){*x=0;*y=1;return b;}ll x1,y1;ll gcd=for_gcdExtended(b%a,a,&x1,&y1);*x=y1-(b/a)*x1;*y=x1;return gcd;}
*/

#define fastio  ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;

bool composite[100000005];
vector<int>primes;
map<int,int>mp;

void sieve()
{
    composite[1] = 1;

    for(int i=2; i*i<=1000; i++)
    {
        if(composite[i]==0)
        {
            for(int j = i*i ; j<=1000; j += i)
            {
                composite[j] = 1;
            }
        }
    }

    for(int i =2; i<=1000; i++)
    {
        if(composite[i]==0)
        {
            primes.push_back(i);
        }
    }
    cout<<endl;
}

void primeFactorization(int N)
{
    for(int i=2; i*i<=N; i++)
    {
        if(N%i==0)
        {
            int cnt = 0;

            while(N%i==0)
                cnt++, N/=i;

            cout<< i<< "^ "<<cnt<<endl;
        }

        if(N>1)
            cout<< N<< "^" <<1<<endl;
    }
}


void optimizedDivisor()
{
    mp.insert({1,0});

    for(int j = 2; j<=10000 ; j++)
    {
        int div = 1,prdiv=0,n=j;
        int x = primes.size(),k=0;

        for (U i = primes[k]; i*i <= j && k<x ; i=primes[++k])
        {
            U cnt = 1;

            if(n%i==0)
            {
                prdiv++;

                while (n %i== 0)
                {
                    cnt++;
                    n /= i;
                }
                div *= cnt;
                //deb(i) debln(cnt)
            }
        }

        if(n!=1)
        {
            div*=2;
            prdiv++;
        }

        mp.insert({div,prdiv});
    }
}


int main(int argc, char const *argv[])
{
    
    sieve();
    optimizedDivisor();
    
    print(primes);
    //PRINT(mp);
    return 0;
}


