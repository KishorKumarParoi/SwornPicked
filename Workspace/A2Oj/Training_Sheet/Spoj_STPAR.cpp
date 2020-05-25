//10-12-19
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

//Print Macros
#define print(v)  for(auto x : v) {  cout<<x<<" ";   }  cout<<endl;
#define PRINT(v)  for(auto x : v) { cout<<x.uu<<" "<<x.vv<<endl; }

using namespace std;



int main()
{
    //open
    //close
    
    
    int n;
    
    while(scl(n)){
     
       if(n==0)
       return 0;
        
        vector<int>order(n);
        For(i,n)
        scl(order[i]);
        
        int need=1;
        stack<int>p;
        bool state=true;
        
        For(i,(int)order.size()){
            
             while(!p.empty() && p.top()==need){
                 
                 need++;
                 p.pop();
             }
            
            if(order[i]==need){
                
                need++;
            }
            
            else if(!p.empty() && p.top()<order[i]){
                
                state=false;
                break; 
            }
            else{
                
                p.push(order[i]);
            }
        }
        
        if(state)
           puts("yes");
        else
           puts("no");
    } 
    
    return 0;
}


