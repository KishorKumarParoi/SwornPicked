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
#include<bits/stdc++.h>
#include<iostream>
#include<iterator>

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

#define M 100000
bool Check(int N,int pos)
{
    return (bool)(N & (1<<pos));
}
int Set(int N,int pos)
{
    return N= N|(1<<pos);
}

/*-------------------Memory Efficiet------------------*/

int status[(M/32)+2];
vector<int>p;
void sieve(int N)
{
    int i, j, sqrtN;
    sqrtN = (int) (sqrt( N) );
    for( i = 3; i <= sqrtN; i += 2 )
    {
        if( Check(status[i>>5],i&31)==0)
        {
            for( j = i*i; j <= N; j += (i<<1) )
            {
                status[j>>5]=Set(status[j>>5],j & 31)   ;
            }
        }
    }

    p.push_back(2);
    for(i=3; i<=N; i+=2)
        if( Check(status[i>>5],i&31)==0)
        {
            p.push_back(i);
        }
}
void divisors(int n)
{
    cout<<n<<": ";
    set<int>s;
        for(int i=0; i<p.size(); i++)
    {
        while(n%p[i]==0)
        {
            n/=p[i];
            s.insert(p[i]);
        }
        if(n==1)
            break;
    }

    for(set<int>::iterator it=s.begin(); it!=s.end(); it++)
    {
        cout<< *it << " ";
    }
    cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    for(int i=2; i<100001; i++)
    {
        sieve(i);
        divisors(i);
    }
    return 0;
}

