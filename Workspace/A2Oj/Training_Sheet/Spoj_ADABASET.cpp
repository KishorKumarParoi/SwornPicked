//4-12-19
#include<bits/stdc++.h>

#define Pi acos(-1.0)
#define ll long long
#define uu first
#define vv second
#define scl(n) scanf("%c",&n)
#define scll(n) scanf("%d",&n)
#define pb push_back
#define eb emplace_back

#define For(i,n)  for(int i=0;i<n;i++)
#define FOR(i,n) for(ll i=0;i<n;i++)
#define FOOR(a,b) for(int i=a;i<=b;i++)
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
    
    int kase=1;
    while(1){
        
          int x;
         char n;
        int v[100005];
        
        
        x=0;
        int u=0;
        
        
        while(scl(n)!='\n'){            
            v[u]=(int)n;
            u++;
            x++;
        }
        
        //sort(all(v1));
        
        int mul=1;
        For(i,x-1){
            mul*=v[i];
        }
        
        int ss=v[x-1];
        
        int arr[mul+2][ss+2];
        
        for(int i=1;i<=mul;i++){
            for(int j=1;j<=ss;j++){
                
                scanf("%d",&arr[i][j]);
            }
        }
        
        char dim;
        while(1){
              int kk=1;
              For(i,x-1){
                
                scl(dim);
                if(dim=='\n')
                break;
                kk*=(int)dim;
            }
            printf("%d\n",arr[kk][dim]);
            
        }
        For(i,kase)
        printf("#");
        kase++;
        printf("\n");
    }
    
    return 0;
}

