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
    
  
    string s,S,s1,s2;
    cin>>S>>s;
    
    For(i,(int)S.size()){
        
        if(S[i]=='|'){
            break;
        }
        else{
            s1+=S[i];
        }
    }
    
    for(int i=s1.size()+1;i<S.size();i++){
        
        s2+=S[i];
    }
    
    //cout<<s1<<endl;
    //cout<<s2<<endl;
    
    For(i,(int)s.size()){
        
        if(s1.size()<s2.size())
        s1+=s[i];
        else
        s2+=s[i];
    }
    
    if(s1.size()==s2.size()){
        
        cout<<s1<<"|"<<s2<<endl;
    }
    
    else{
        
        puts("Impossible");
    }
   
    return 0;
}

