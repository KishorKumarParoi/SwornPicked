//7-12-19
#include<bits/stdc++.h>

#define Pi acos(-1.0)
#define ll long long
#define uu first
#define vv second
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

#define fastio ios::sync_with_stdio(false);cin.tie(nullptr);

//Print Macros
#define print(v)  for(auto x : v) {  cout<<x<<" ";   }  cout<<endl;
#define PRINT(v)  for(auto x : v) { cout<<x.uu<<" "<<x.vv<<endl; }

using namespace std;



int main()
{
    //open
    //close
      //fastio
    
   string s,str;
   
   cin>>s;
   
  
   map<int,char>mp;
   
   set<int>st;
   
   int i=0;
   for(char c='a';c<='z';c++){
       
       int x=s[i];
       if(st.find(x)==st.end()){
           
       st.insert(x);
       mp[x-48]=c;        
       }
      
      i++;
      
   }
   
  cin>>str;
  
  for(int i=0;i<str.size();i++){
      
      char c=str[i];
      cout<<mp[c-'0'];
  }
    
    return 0;
}


