
// Problem : B. President's Office
// Contest : Codeforces Beta Round #6 (Div. 2 Only)
// URL : https://codeforces.com/contest/6/problem/B
// Memory Limit : 64.000000MB 
// Time Limit : 2000.000000milisec 
// Powered by CP Editor (https://github.com/coder3101/cp-editor2)

//18-12-19
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

using namespace std;



int main()
{
    //open
    //close
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,m;
	char c;
	scl(n);
	scl(m);
	cin>>c;
	
    char s[110];
	
	For(i,n)
	      cin>>s[i];
	
	int cnt=0;
	
	For(i,n){
		
		For(j,m){
			
			if(s[i][j]==c){
				
				if(j!=0 && s[i][j-1]==c )
				    cnt++;
			    if(s[i][j+1]==c && j!=m-1)
				    cnt++;
				if(s[i-1][j]==c && i!=0)
				    cnt++;
				if(s[i+1][j]==c && i!=n-1)
				    cnt++;
			}
		}
	}
    
	cout<<cnt<<endl;
	
    return 0;
}



