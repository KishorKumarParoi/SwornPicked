//30-11-19
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
#define print(v)   for(auto x : v)  {cout<<x<<" ";}  cout<<endl;
#define PRINT(v)   for(auto x: v) {cout<<x.uu<<" "<<x.vv<<endl;}cout<<endl;
using namespace std;

int sub,stud,t,n,r;
map<int, set<int> >mp;


int main()
{
    // open;
    // close;
    // fastio
    scl(t);
      
    int cnt,kase=1;
      
    while(t--){ 
          
        mp.clear(); 
        
         scl(n);
         scl(r);  
         cnt=0;
           
        for(int i=1;i<=r;i++){
            
            scl(stud);
            scl(sub);            
            mp[stud].insert(sub);
        }
        
        for(auto x : mp){           
            cnt+=x.second.size();
          }   
        
          // cout<<cnt<<" "<<r<<endl;
           
           if(cnt<r){
               
               printf("Scenario #%d: impossible\n",kase++);
           }  
           else{
               printf("Scenario #%d: possible\n",kase++);
           }
        
   }   
   
   
    return 0;
}

