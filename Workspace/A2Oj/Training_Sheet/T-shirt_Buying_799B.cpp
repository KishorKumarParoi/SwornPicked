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
#define print(v)   for(auto x : v)  {cout<<x<<" ";}  cout<<endl;
#define PRINT(v)   for(auto x: v) {cout<<x.uu<<" "<<x.vv<<endl;}cout<<endl;
using namespace std;

#define vi vector<int>
int main()
{
    // open;
    // close;
    // fastio
    
    int n;
    scl(n);
    
    vector<int>v1(n),v2(n),v3(n);
    
    map<int,set<int> >mp;
    
    For(i,n)
    cin>>v1[i];
    
    For(i,n)
    cin>>v2[i];
    
    For(i,n)
    cin>>v3[i];
    
    
    For(i,n){
        
        mp[v2[i]].insert(v1[i]);
        mp[v3[i]].insert(v1[i]);
    }
   
   /*
   for(auto x:mp){
       
       cout<<x.first<<" : ";
       for(auto it: x.second){
           
           cout<<it<<" ";
       }
       cout<<endl;
   }
   
  */
   
   int xx;
   scl(xx);
   For(i,xx){
       
       int num;
       scl(num);
       auto it = mp[num].begin();
       
       if(mp[num].empty()){
           
           cout<<"-1"<<endl;
       }
       else
       {
           cout<<*it<<" ";
           int y=*it;
           mp[1].erase(y);
           mp[2].erase(y);
           mp[3].erase(y);
       }
   
   }
   cout<<endl;
    return 0;
}

