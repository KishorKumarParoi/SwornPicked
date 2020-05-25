
// Problem : B. Olympic Medal
// Contest : Codeforces Round #132 (Div. 2)
// URL : https://codeforces.com/contest/215/problem/B
// Memory Limit : 256.000000MB 
// Time Limit : 2000.000000milisec 
// Powered by CP Editor (https://github.com/coder3101/cp-editor2)


/*

Rationalizing everything, avoiding unpleasant things
That kind of life is empty, isn't it?

If we didn't meet here by chance back then
Without even knowing what it means to live

Whatever path you master, it doesn't happen in a single day
Hold that ideal image in your heart
Don't chatter, don't look aside...

But when you're about to cry, when you want to throw everything down
When you're about to lose to your weak self
Put that kind of you in a birdcage
And throw it into a ravine!

And then, for the sake of the guys who believe in you more than anyone
For the sake of your beliefs
You'll be able to get strong. Break through it.

Are you getting closer bit by bit to your ideals, your dreams?
If you can't see it with your eyes, you're uneasy

During your long life, it's okay to stumble, or to stop dead
Hold those words in your heart
And sometimes take a big look at the sky

If you don't understand, if you can't do anything
Sometimes it's okay to give yourself up
If you're at your wits' end like that
Don't shed any tears!

And once you've reached the bottom of your worries, when you're ready to give up
A new path will open up suddenly
You can become strong. You have the courage.

"I love it." "I don't want to give up."
You said even when you were completely worn out
Don't ever let go
Of that strong, wonderful heart!

But when you're about to cry, when you want to throw everything down
When you're about to lose to your weak self
Put that kind of you in a birdcage
And throw it into a ravine!

And then, for the sake of the guys who believe in you more than anyone
For the sake of your beliefs
You'll be able to get strong. Break through it.

*/

//20-12-19
#include<bits/stdc++.h>

#define Pi acos(-1.0)
#define ll long long
#define uu first
#define vv second
#define endl "\n"
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



int main()
{
    //open
    //close
    fastio
    
    int n,x,p1,p2,A,B;
	
	vector<int>vn,vp1,vp2;
	
	scl(n);
	For(i,n){
		
		scl(x);
		vn.pb(x);
	}
	
	scl(p1);
	
	For(i,p1){
		
		scl(x);
		vp1.pb(x);
	}
	
	scl(p2);
	For(i,p2){
		
		scl(x);
		vp2.pb(x);
	}
	
	scl(A);
	scl(B);
	
	sort(ALL(vn));
	sort(ALL(vp1));
	sort(ALL(vp2));
	
	double P2,P1,R1;
	
	R1=vn[n-1]*1.0;
	P1=vp1[p1-1]*1.0;
	P2=vp2[0]*1.0;
	
	double ans,res;
	
	res = (B*1.0 * P1)/((A*P2*1.0)+(B*P1*1.0));
	res=sqrt(res);
	
	ans= res*R1;
	
	printf("%.12lf\n",ans);
	
    
    return 0;
}




