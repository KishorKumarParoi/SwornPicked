//1-11-19
#include<bits/stdc++.h>

#define Pi acos(-1.0)
#define ll long long
#define uu first
#define vv second
#define scl(n) scanf("%d",&n)
#define scll(n) scanf("%lld",&n)
#define pb push_back
#define eb emplace_back

#define For(i,n)  for(int i=0;i<n;i++)
#define FOR(i,n) for(ll i=0;i<n;i++)
#define FOOR(a,b) for(ll i=a;i<=b;i++)
#define all(c) (c).begin(),(c).end()
#define open  freopen("input.txt","r",stdin)
#define close freopen ("output.txt","w",stdout)
#define fastio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define print(v)   for(auto x : v)  {cout<<" "<<x;}  cout<<endl;
#define PRINT(v)   for(auto x: v) {cout<<x.uu<<" "<<x.vv<<endl;}cout<<endl;
using namespace std;

int main()
{
    // open;
    // close;
    // fastio
    
    int t;
    scl(t);
    int m,n,kase=1;
    string s;
     
    while(t--){
        
        set<string>ss[3];
        
        scl(m);
        scl(n);
        getline(cin,s);
        
        
        For(i,m){
            getline(cin,s);
            ss[0].insert(s);
        }
        
        For(i,n){
            getline(cin,s);
            ss[1].insert(s);
        }
        
        set<string>st;
       
        
         for(auto it=ss[0].begin();it!=ss[0].end();it++){
             
             for(auto x=ss[1].begin();x!=ss[1].end();x++){
                 
                 string kk;
                 kk=*it+*x;
                 //cout<<kk<<endl;
                 st.insert(kk);
             }
         }   
          
          
          printf("Case %d: ",kase++);
          cout<<st.size()<<endl;
          //print(st);
    }
    
    return 0;
}

