//7-12-19
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

#define fastio ios::sync_with_stdio(false);cin.tie(nullptr);

//Print Macros
#define print(v)  for(auto x : v) {  cout<<x<<" ";   }  cout<<endl;
#define PRINT(v)  for(auto x : v) { cout<<x.uu<<" "<<x.vv<<endl; }

ll mod=1000000007;

using namespace std;

long long int sumXOR(int arr[], int n) 
{ 
    long long int sum = 0; 
    for (int i = 0; i < 64; i++)  
    { 
        //  Count of zeros and ones 
        int zc = 0, oc = 0;  
          
        // Individual sum at each bit position 
        long long int idsum = 0;  
        for (int j = 0; j < n; j++) 
        { 
            if (arr[j] % 2 == 0) 
                zc++; 
            else
                oc++; 
            arr[j] /= 2; 
        } 
          
        // calculating individual bit sum  
        idsum = oc%mod * zc%mod * (1 << i)%mod;  
  
        // final sum     
        sum += idsum%mod;  
    } 
    return sum%mod; 
}

int main()
{
    //open
    //close
    //fastio
    
    ll n,sum;
    scll(n);
    
    int a[n+10];
    
    FOR(i,1,n)
    cin>>a[i];
    
    sum=sumXOR(a,n); 
    
    cout<<sum<<endl;
    
    return 0;
}


