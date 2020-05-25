
// Problem : The Embarrassed Cryptographer
// Contest : SPOJ - Classical
// URL : https://www.spoj.com/problems/CRYPTON/
// Memory Limit : 1536.000000MB 
// Time Limit : 1418.000000milisec 
// Powered by CP Editor (https://github.com/coder3101/cp-editor2)

//22-12-19
#include<bits/stdc++.h>

#define Pi acos(-1.0)
#define U unsigned 
#define ll long long
#define uu first
#define vv second
#define endl "\n"
#define scu(n) scanf("%u",&n);
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
ll for_gcd(ll a,ll b){if(a==0) return b;else return for_gcd(b%a,a);}
ll for_prime(ll x){for (ll i=2;i*i<=x;i++){if(x%i==0) return 0;}return 1;}
void for_swap(char *x,char *y){char temp;temp=*x;*x=*y;*y=temp;}
ll for_big_mod(ll b,ll p,ll m){if(p==0) return 1;else if(p%2==0){ll k=for_big_mod(b,p/2,m);return (k*k)%m;}else return ((b%m)*(for_big_mod(b,p-1,m)))%m;}
ll for_josephus(ll n,ll k){if(n==1) return 1;return (for_josephus(n-1,k)+k-1)%n+1;}
ll for_gcdExtended(ll a,ll b,ll *x,ll *y){if(a==0){*x=0;*y=1;return b;}ll x1,y1;ll gcd=for_gcdExtended(b%a,a,&x1,&y1);*x=y1-(b/a)*x1;*y=x1;return gcd;}
*/

#define fastio  ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;

int rem (char *s,int n){
	
	int ret=0;
	
	for(int i=0;s[i];i++){
		
		ret = (ret*10 + s[i]-'0') % n;
		//deb(n) debln(ret)
	}
	
	return ret;
}

// Sieve Of Eratosthenes

const U mx = 1000009;
vector<U>primes;
U pr[mx];
bool prime[mx];

void sieve()
{
    U i,j;
    memset(prime,true,sizeof(prime));

    prime[0]=prime[1]=false;

    for( i=4; i<=mx; i+=2)
        prime[i]=false;
  
    for( i=3; i*i<=mx; i+=2)
    {
        if(prime[i]==true)
        {
            for(j=i*i ; j<=mx ; j+=(i<<1) )
            {
                prime[j]=false;
            }
        }
    }


   for(i=2;i<=mx;i++){
	
	if(prime[i])
	primes.pb(i);
  }
   /*
    pr[2]=1;

    for(i=3; i<=mx; i+=2)
    {
        if(prime[i])
        {
            pr[i+1]=pr[i]=pr[i-1]+1;
        }
        else
        {
            pr[i+1]=pr[i]=pr[i-1];
        }
    }
	
	*/
	
	//print(primes);

}


int main()
{
    //open
    //close
    //fastio
	
	U l,i;
	char s[110];
	sieve();
	
	while(scanf("%s %u",s,&l)){
		
		if(s[0]=='0' && l==0)
		  break;
		
		for(i=0;primes[i]<l;i++){
			
			if(!rem(s,primes[i]))
			break;
		}
		
		if(primes[i]>=l)
		  printf("GOOD\n");
		else
		  printf("BAD %d\n",primes[i]);
		
	}
	
	
    return 0;
}

