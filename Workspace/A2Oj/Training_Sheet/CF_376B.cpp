
// Problem : B. Jeff and Periods
// Contest : Codeforces Round #204 (Div. 2)
// URL : https://codeforces.com/contest/352/problem/B
// Memory Limit : 256.000000MB 
// Time Limit : 1000.000000milisec 
// Powered by CP Editor (https://github.com/coder3101/cp-editor2)

//25-12-19
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
#define For(i,n) for(int i=1;i<=n;i++)

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

int main()
{
    //open
    //close
    //fastio
	
	int n;
	scl(n);
	
	map<int,vector<int> >mp;
	
	For(i,n){
		
		int x;
		cin>>x;
		mp[x].pb(i);
	}
	
	vector<pair<int,int> > v;
	
	for(auto &x : mp){
		
		if(x.vv.size()==1)
		   v.eb(x.uu,0);
		else{
			
			 int sz=x.vv.size();
			 int d = x.vv[1]-x.vv[0];
			
			bool ok=true;
			for(int i=2;i<sz;i++){
				
				ok &= x.vv[i]-x.vv[i-1]==d;
			}
			
			if(ok)
			   v.eb(x.uu,d);
		}
	}
	
	cout<<v.size()<<endl;
	for(auto &x : v)
	  cout<<x.uu<<" "<<x.vv<<endl;
	
    return 0;
}



