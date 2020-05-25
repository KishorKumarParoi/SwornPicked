/*..............................................*\
Author:Kishor Kumar Paroi
Dept:CSE-1703053
email.kishor.josephite@gmail.com
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
#include<bits/stdc++.h>
#include<iostream>
#include<iterator>
#include<gmp.h>

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

/*for(vector<int>iterator it=v.begin();it!=v.end();it++)
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

int fib1(int n)
{
    if(n<=1)
        return n;
    else
        return fib1(n-1)+fib1(n-2);
}
int fib2(int n)
{
    int f[n+2];
    int i;
    f[0]=0;
    f[1]=1;
    for(i=2; i<=n; i++)
    {
        f[i]=f[i-1]+f[i-2];
    }
    return f[n];
}

int fib3(int n)
{
    int a=0,b=1,c,i;
    if(n==0)
        return a;
    for(i=2; i<=n; i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return b;

}
const int MAX=1000;
int f[MAX]= {0};
int Fib(LL n)
{
    if(n==0)
        return 0;
    if(n==1||n==2)
        return 1;
    if (f[n])
        return f[n];
    int k=(n&1)?(n+1)/2:n/2;
    f[n]=(n&1)? (fib2(k)*fib2(k)+fib2(k-1)*fib2(k-1)):
         (2*fib2(k-1)+fib2(k))*fib2(k);
    return f[n];
}

LL mama(LL n)
{
    string s;
    double phi=(1+sqrt(5))/2;
    return(round(pow(phi,n)/sqrt(5)));

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    LL n;
    while(scanf("%lld",&n)<=1000)
    {
        int64_t x = mama(n);
        printf("The Fibonacci number for %lld is %lld\n",n,x);
    }
    return 0;
}

