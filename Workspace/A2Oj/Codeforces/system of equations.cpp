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
#define LL long long                                //long long short form
#define fori(i,n) for(int i=1;i<=n;++i)
#define forn(i,n) for(int i=0;i<n;++i)
#define sz(x) int(x.size())
#define error(x) cout<<#x<<" "<<x<<endl
#define IOS  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define vi vector<int>v
#define si vector<int>s

/*for(vector<int>::iterator it=v.begin();it!=v.end();it++)
{
    cout<<*it<< " ";
}
cout<< endl;
*/

#define CIN1(a) long long a;cin >> a;
#define CIN2(a,b) long long a,b;cin >> a >> b;
#define CIN3(a,b,c) long long a,b,c;cin >> a >> b >> c;
#define rep(i,n) for(int i=0,i##_len=(n); i<i##_len; ++i)
//const int N=100*1000;
//const int mod=1e9+7;

//# define int min3(int a,int b,int c){return min(a,min(b,c));}
//#define int max3(int a,int b,int c){return max(a,max(b,c));}
//#define int min4(int a,int b,int c,int d){return min(min(a,b),min(c,d));}
//#define int max4(int a,int b,int c,int d){return max(max(a,b),max(c,d));}

using namespace std;
#define sc(x)            scanf("%d",&x)
#define scc(x)           scanf("%c",&x)
#define scl(x)           scanf("%lld",&x)
#define sz(v)	     	(v.size())
#define mem(v, d)		memset(v, d, sizeof(v))
#define oo				2000000100
#define OO				4000000000000000100
#define PI 3.14159265
typedef unsigned int uint;
typedef long long ll;
//-----------------------------------------------------
const int N = 100100;
const ll MOD = 1000000007;
const double EBS = 1e-7;

int dX[] = {0,0,1,-1};
int dY[] = {1,-1,0,0};

//int GCD(ll num,ll ones) { return !ones ? num : GCD(ones,num%ones); }
//ll lcm(ll a, ll b) { return (a / GCD(a, b)) * b; }
//double Len(ll x,ll y,ll X,ll Y) { return sqrt((X-x)*(X-x)+(Y-y)*(Y-y)); }
/*ll fastP(ll b,ll p)
{
    if(p==0) return 1;
    else if(p==1) return b;
    ll a = fastP(b,p/2);
    if(p%2) return (((a*a))*b);
    else return (a*a);
}*/
//----------------- ------   -------

int main()
{
#ifndef ONLINE_JUDGE
    //freopen("i.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif
    int n,m;
    sc(n);
    sc(m);
    set<pair<int,int>>st;
    for(int a=0; a*a<=n; ++a)
    {
        int b = n - a*a;
        if(a+b*b==m)
            st.insert({a,b});
    }
    cout<<sz(st);







    return 0;
}
