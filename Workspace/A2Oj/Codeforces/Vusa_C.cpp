/*..............................................*\
O H M    T O T S O T  -!+
Author:Kishor Kumar Paroi
Dept:CSE-1703053
Email:kishor.josephite@gmail.com
RUET,BANGLADESH
\*---------------------------*/
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <sstream>
#include <map>
#include <vector>
#include <stack>
#include <queue>
#include <bits/stdc++.h>
#include <iostream>
#include <iterator>
#include <cctype>

#define max(a,b) ((a>b)?a:b)                        //finding max
#define min(a,b) ((a<b)?a:b)                        //finding min
#define Max(a,b,c) max(a,max(b,c))                  //finding max between 3 numbers
#define Min(a,b,c) min(a,min(b,c))                  //finding min between 3 numbers
#define Pi acos(-1.0)                               //defining Pi for mathematical uses
#define Clear(a) memset(a,0,sizeof(a))              //clearing memory of an array
#define setfalse(a) memset(a,false,sizeof(a))       //setting the array into false
#define settrue(a) memset(a,true,sizeof(a))         //setting the array into true
#define clrstr(a) memset(a,'\0',sizeof(a))          //setting string array to null
#define open freopen("input.txt","r",stdin)         //opening input file
#define close freopen ("output.txt","w",stdout)     //opening output file
#define Case(a) printf("Case %d: ",a)               //printing case number
#define caseh(a) printf("Case #%d: ",a)             //printing case number having '#'
#define getcase(a) scanf("%d",&a)                   //scanning case number
#define caseloop(a,b) for(a=1;a<=b;a++)             //making case loop
#define EPS 1e-9                                    //small value for avoiding preccesion error
#define ll long long                                //long long short form
#define fori(i,n) for(int i=1;i<=n;++i)
#define forn(i,n) for(int i=0;i<n;++i)
#define sz(x) int(x.size())
#define error(x) cout<<#x<<" "<<x<<endl
#define IOS  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define vi vector<int>v
#define si vector<int>s

using namespace std;
string a,b,c;
int n,i,j,k,l,m,cnt;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cerr.tie(nullptr);
    //open;
    //close;
    cin>>a>>b;
    bool p=1;
    m=a.size();
    n=b.size();
    //k=m-n+1;
    for(i=0; i<n; i++)
    {
        // string d=a.substr(i,n);
        //cout<<d<<endl;
        //  cnt=0;
        p^=a[i]^b[i];
        //cout<<"cnt = "<<cnt<<endl;
    }
    ll ans=p;
   // cout<<ans<<endl;
    for(i=n; i<m; ++i)
    {
       // cout<<a[i]<<" "<<a[i-n]<<endl;
        p^=a[i]^a[i-n];
        //cout<<p<<endl;
        ans+=p;
    }
    cout<<ans<<endl;
    return 0;
}
