//4-12-19
#include<bits/stdc++.h>

#define Y "YES"
#define N "NO"
#define uu first
#define vv second
#define ll long long
#define scll(n) scanf("%lld",&n)
#define endl "\n"
#define For(i,n)  for(ll i=1;i<=n;i++)
#define print(v)   for(auto x : v)  {cout<<x<<" ";}  cout<<endl;
#define PRINT(v)   for(auto x: v) {cout<<x.uu<<" "<<x.vv<<endl;}cout<<endl;
using namespace std;

  map<ll,ll>prefix,suffix;
   
  ll arr[100005];
  ll precum[100005];
  ll suffcum[100005];
    
int main()
{
    // open;
    // close;
    // fastio
    
    ll n;
    scll(n);
    
  

   For(i,n)
   cin>>arr[i];
   
   precum[0]=0;
   For(i,n){
       
       precum[i]=precum[i-1]+ arr[i];
       prefix[precum[i]]=i;
   }
   
   suffcum[n+1]=0;
   for(ll i=n;i>=1;i--){
       
       suffcum[i]=suffcum[i+1]+arr[i];
       suffix[suffcum[i]]=i;
   }
   
   if(precum[n]%2!=0){
       
       cout<<N<<endl;
       return 0;
   }
     
   /*
   For(i,n)
   cout<<precum[i]<<" ";
   cout<<endl;
   
   
   For(i,n){
       
       cout<<suffcum[i]<<" ";
   }
   cout<<endl;
   
   */
   
   //PRINT(prefix);
   //PRINT(suffix);
   
   ll ordhek  = precum[n]/2;
   
   for(ll i=1;i<=n;i++){
   
        ll lagbe=ordhek-arr[i];
        if(lagbe==0)
        {
            cout<<"YES"<<endl;
            return 0;
        }
        if(prefix[lagbe]!=0)
        {
            if(prefix[lagbe]>=i)
            {
 
            }
            else
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
        if(suffix[lagbe]!=0)
        {
            if(suffix[lagbe]<=i)
            {
 
            }
            else
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
 
    }
    cout<<"NO"<<endl;
    
    return 0;
}

