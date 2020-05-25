
// Problem : Playing with Marbles
// Contest : SPOJ - Classical
// URL : https://www.spoj.com/problems/TUTMRBL/
// Memory Limit : 1536.000000MB 
// Time Limit : 1943.000000milisec 
// Powered by CP Editor (https://github.com/coder3101/cp-editor2)

//24-12-19
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

#define M (U) 10000009
bool Check(U N,U pos)
{
    return (bool)(N & (1<<pos));
}
U Set(U N,U pos)
{
    return N= N|(1<<pos);
}

vector<U>PRIMES;
U status[(M/32)+2];

void BITSieve()
{
    U i, j;

    for( i = 3; i * i <= M; i += 2 )
    {
        if( Check(status[i>>5],i&31)==0)
        {
            for( j = i*i; j <= M; j += (i<<1) )
            {
                status[j>>5]=Set(status[j>>5],j & 31)   ;
            }
        }
    }

    PRIMES.push_back(2);
    for(i=3; i<=M; i+=2)
        if( Check(status[i>>5],i&31)==0)
        {
            PRIMES.push_back(i);
        }

}

#define mx 100000000
U marked[mx/64+2];

#define on(x)         (marked[x/64] & (1<<((x%64)/2)))
#define mark(x)      marked[x/64]!= (1<<((x%64)/2))

void BITSIEVE()
{

    {
        for (U i = 3; i * i < mx; i += 2)
        {
            if (!on(i))
            {
                for (U j = i * i; j <= mx; j += i + i)
                {
                    mark(j);
                }
            }
        }
    }

}

bool isPrime(U num)
{
    return (num>1) && (num==2   || ((num & 1)  && !on(num)) );
}



void primeFactorization(U n)
{
    U x= PRIMES.size();
    U cnt=0,xx=n;
	
    for(U i=0; i<x && PRIMES[i]*PRIMES[i]<=xx; i++)
    {
        while(n%PRIMES[i]==0)
        {
            n/=PRIMES[i];
			cnt++;
			
			if(n==1)
			printf(" %u\n",PRIMES[i]);
			
			else if(isPrime(n))
			printf(" %u\n",n);
			
			else
            printf(" %u *",PRIMES[i]);
			
        }
        if(n==1)
            break;
    }
    if(n!=1)
        printf(" %u\n",xx);
		
    if(cnt>0)
	printf("With %u marbles, %u different rectangles can be constructed.\n",xx,cnt);
	else
	printf("With %u marbles, 1 different rectangles can be constructed.\n",xx);

}

int main()
{
    //open
    //close
    // fastio
	
	U n;
	//BITSieve();
	BITSIEVE();
	
	while(scu(n)==1){
		
		if(n==0)
		break;
		
	    debln(isPrime(n))
		//printf("%u =",n);
		//primeFactorization(n);
	}
	
    return 0;
}



