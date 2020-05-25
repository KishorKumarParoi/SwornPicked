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
#define print(v)   for(auto x : v)  {cout<<x.second<<" ";}  cout<<endl;
#define PRINT(v)   for(auto x: v) {cout<<x.uu<<" "<<x.vv<<endl;}cout<<endl;
using namespace std;

int main()
{
    // open;
    // close;
    // fastio
    
     string s;
     while(getline(cin,s)){
         
          map<char,int>mp;
          
          For(i,26){
            mp[97+i]=0;
         }
    
   
         
         if(s=="-1")
         return 0;
         
         For(i,(int)s.size()){
             s[i] = tolower(s[i]);
         }
         
         //cout<<s<<endl;
                  
         int x=1;
         bool ch = false;
         For(i,(int)s.size()){
             
             if(s[i]!=' '){
                 
                 if(s[i]>='a' && s[i]<='z'){
                     
                     ch=true;
                 }
             }
             
             else{
                 
                 if(ch)
                 x++;
                 ch=false;
             }
         }
         cout<<x;
         
         For(i,(int)s.size()){
         if(s[i]>='a' && s[i]<='z')
             mp[s[i]]++;
         }
         
         
         for(auto x: mp){
             
             cout<<" "<<x.second;
         }
         cout<<endl;
         
     }
    
    return 0;
}

