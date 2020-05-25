//27-11-19
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

int main()
{
    // open;
    // close;
    // fastio
    
    int n;
    scl(n);
    map<int,int>mp;
    
    vector<int>v(n);
    
    For(i,n){
        
        int x;
        scl(x);

        mp[x]++;
        v[i]=x;
    }
    
    //PRINT(mp);
    
    int y = INT_MAX;
    int x=0;
    
    for(auto it: mp){
     
           if(it.vv<y){        
            y = it.vv;
            x = it.uu;
        }
    }
    
    //cout<<x<<" "<<y<<endl;
    
    if(mp.size()<3){
        
        puts("0");
        return 0;
    }
        
      cout<<y<<endl;
      
      int marked[n+10]={0};
      
      while(y--){
          
          for(int i=0;i<v.size();i++)
          {
              if(v[i]==1){
                 if(!marked[i]){
                     cout<<i+1<<" ";
                     marked[i]=1;
                     break;
                 }
              }
          }
          
          for(int i=0;i<v.size();i++)
          {
              if(v[i]==2){
                  if(!marked[i]){
                     cout<<i+1<<" ";
                     marked[i]=1;
                     break;
                 }
              }
          }
          
          for(int i=0;i<v.size();i++)
          {
              if(v[i]==3){
                  if(!marked[i]){
                     cout<<i+1<<endl;
                     marked[i]=1;
                     break;
                 }
              }
          }
          
      }
      
      
    return 0;
}

