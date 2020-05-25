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

#define pii pair<int,int>



int main()
{
    // open;
    // close;
    // fastio
    
    int t,n,kase=1,r,i;
    scl(t);
    while(t--){
        
        scl(n);
        scl(r);
        
       vector<pii>v(r);
        //pii tmp;  
          
        For(i,r){
             cin>>v[i].first>>v[i].second;         
        }
        
       sort(all(v));
       
       set<int>st;
       int pre = -69;
       
       for(i=0;i<r;i++){
           
           if(v[i].first!= pre){
               
               pre=v[i].first;
               st.clear();
           }    
           
           if(st.find(v[i].second)==st.end()){
               
               st.insert(v[i].second);
           }
           else
           break;
       }
       
       printf("Scenario #%d: ",kase++);
       if(i!=r)
       cout<< "impossible\n";
       else
       cout<< "possible\n";
       
       //PRINT(v); 
       //print(st);
       
       
    }
        
    return 0;
}

