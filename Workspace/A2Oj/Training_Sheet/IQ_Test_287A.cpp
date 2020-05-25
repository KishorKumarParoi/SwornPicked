//26-11-19
#include<bits/stdc++.h>

#define Pi acos(-1.0)
#define ll long long
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
#define PRINT(v)   for(auto x : v) { {cout<<x<<" ";}  cout<<endl;}
using namespace std;

int main()
{
    // open;
    // close;
    // fastio
    
  
    char a[5][5];
    
    For(i,4)
    For(j,4)
    cin>>a[i][j];
    
    
    for(int i=1;i<4;i++)
    {
    
        for(int j=1;j<4;j++)
        {
            
            int cnt = 0;        
           
            if(a[i][j]=='#')
            cnt++;
            
            if(a[i-1][j-1]=='#')
            cnt++;
            
            if(a[i-1][j]=='#')
            cnt++;
            
            if(a[i][j-1]=='#')
            cnt++;
            
            //cout<<cnt<<" "<<i<<" "<<j<<endl;
            if(cnt==3 || cnt==4 || cnt==0 || cnt==1)
            {
                puts("YES");
                return 0;
            }
        }
    }
    
    puts("NO");
    
    return 0;
}

