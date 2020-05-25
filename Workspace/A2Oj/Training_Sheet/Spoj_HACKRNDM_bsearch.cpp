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


int bSearch(int arr[],int num,int n){
    
    int lo=0,hi=n-1,mid;

    while(lo<=hi){
        
        mid=lo+(hi-lo)/2;
        
        if(arr[mid]>=num){
            
            if(arr[mid]==num)
                return true;
            hi=mid-1;
        }
        else{
            
            lo=mid+1;
        }
    }
    return  false;
    
}

int main()
{
    // open;
    // close;
    // fastio
    
    int n,k;
    scl(n);
    scl(k);
    
    int a[n+2];
    For(i,n){
        cin>>a[i];
    }
    
    sort(a,a+n);
    
    For(i,n){
        
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
    
    int cnt=0;
    
    int lo=0,hi=n-1;
    
    while(lo<hi){
        
       if(a[hi]-a[lo]<k)
           hi=n-1;
       else if(a[hi]-a[lo]>k)
           hi--;
       else if(a[hi]-a[lo]==k){
           ++cnt;
       }
       lo++;
       cout<<a[lo]<<" "<<a[hi]<<" "<<cnt<<endl;
    }
    
    cout<<cnt<<endl;
     
     
    return 0;
}

