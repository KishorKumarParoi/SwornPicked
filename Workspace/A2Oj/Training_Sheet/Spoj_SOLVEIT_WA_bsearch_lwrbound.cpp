//1-11-19
#include<bits/stdc++.h>
 
#define Pi acos(-1.0)
#define ll int
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
 
int bSearch(int arr[],int num,int n){
    
    int lo=0,hi=num-1,mid;
      int ans=-1;
      
    while(lo<=hi){
        
        mid=lo+(hi-lo)/2;
        
        if(arr[mid]>=n){
            
            if(arr[mid]==n)
                ans=mid+1;
            hi=mid-1;
        }
        
        else{
            
            lo=mid+1;
        }
    }
    
    return  ans;
    
}
int main()
{
    // open;
    // close;
    // fastio
 
    int n,q;
    scl(n);
    scl(q);
    int a[n+1];
    
    FOOR(1,n){
        a[i]=0;
    }
    
    FOOR(1,q){
        
        int x;
        scl(x);
        if(x==1){
            int k;
            scl(k);
            a[k]=-1;
        }
        if(x==2){
            
            int y;
            scl(y);
            
            int ar[n+10];
         
          
            for(int i=y;i<=n;i++){
                
                ar[i-y+1]=a[i];
            }
            
            int x=n-y+1;
            sort(ar,ar+n);
            printf("%d\n",bSearch(ar,x,-1));        
        }
        
    }
            
    return 0;
}