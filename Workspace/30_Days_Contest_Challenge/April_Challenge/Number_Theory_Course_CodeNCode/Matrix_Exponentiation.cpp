//10-4-20
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define scu(n)          scanf("%u",&n)
#define scl(n)          scanf("%d",&n)
#define scll(n)         scanf("%lld",&n)
#define uu              first
#define vv              second
#define ll             long long
#define U               unsigned
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define Pi               acos(-1.0)
#define endl            "\n"
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

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
#define PRINT(v)  for(auto x : v) { cout<<x.uu<<" "<<x.vv<<endl; 

void RADHE_KRSNA()
{
	ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}

#define N 101
int ar[N][N], I[N][N];

void power(int A[][N],int dim,int n)
{
	rep(i,1,dim)
	  rep(j,1,dim)
	  { 
	  	if(i==j)
	  		I[i][j] = 1;
	  	else
	  		I[i][j] = 0;
	  }

	  rep(i,1,n)
	 { I = I * A;}

	  rep(i,1,dim)
	  {
	  	rep(j,1,dim)
	  	{
	  		A[i][j] = I[i][j];
	  	}
	  }



}

int main()
{
	RADHE_KRSNA;
    //cout << "Dreaming of becoming LGM oneday by KRSNA mercy\n";

    w(t)
    {
    	int dim,n;

    	cin>>dim>>n;

    	rep(i,1,dim)
    	rep(j,1,dim)
    	cin>>ar[i][j];

    	power()
    }

    return 0;
}

