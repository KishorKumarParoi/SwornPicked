
// Problem : Divisors - 2
// Contest : SPOJ - Classical
// URL : https://www.spoj.com/problems/DIV2/
// Memory Limit : 1536.000000MB 
// Time Limit : 873.000000milisec 
// Powered by CP Editor (https://github.com/coder3101/cp-editor2)

//23-12-19
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

using namespace std;

#define M 10009
vector<int>prime;	
bool check[M];

void shieve()
{
    for(int i=3; i*i<=10000; i+=2)
    {
        if(!check[i])
        {
            for(int j=i*i; j<=10000 ; j+=i<<1)
                check[j]=1;
        }
    }
    prime.pb(2);
   
    for(int i=3; i<=10000; i+=2)
    {
        if(!check[i])
        {
            prime.pb(i);
        }
    }
}


bool isPrime(int n){
	
	if(n<2)
	 return false;
	
	for(int i=2;i*i<=n;i++){
		
		if(n%i==0)
		return false;
	}
	
	return true;
}


int main()
{
    //open
    //close
    //fastio
	
	
	shieve();
	vector<int>num;
	
	for(int i=2;i<=1000000;i++){
		
		int n=i;
		int prcnt=0;
		bool ck=0;
		
		for(int j=0;prime[j]*prime[j]<=n; j++){
			
			if(n%prime[j]==0){
				
				n/=prime[j];
				prcnt++;
				
				if(n%prime[j]==0){
					
					ck=1;
					break;
				}
			}
		}
		
		if(ck==0 && n!=1)
		prcnt++;
		
		if(prcnt>1 && ck==0){
			
			num.pb(i);
		}
	}
	
	sort(ALL(num));
	int sz= num.size();
	
	for(int i=107;i<sz;i+=108){
		
		printf("%d\n",num[i]);
	}
	
    return 0;
}



