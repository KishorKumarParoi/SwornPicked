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
#include <bitset>
#include <bits/stdc++.h>
#include <iostream>
#include <iterator>
#include <cctype>

#define DB(x) cerr << __LINE__ << ": " << #x << " = " << (x) << endl
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

ll fb[10001][10500],i,j;
void fibonacci()
{
    fb[0][0]=0;
    fb[1][0]=1;
    fb[2][0]=1;
    for(i = 3; i<10000; i++)
    {
        for( j = 0; j<10500; j++)
        {
            fb[i][j]+=fb[i-1][j]+fb[i-2][j];
            if(fb[i][j]>=10)
            {
                fb[i][j+1]+=fb[i][j]/10;
                fb[i][j]%=10;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cerr.tie(nullptr);
    //open;
    //close;
    fibonacci();
    ll n;
    while(cin>>n)
    {
        for(i=10499; i>0; i--)
        {
            if(fb[n][i]!=0)
                break;
        }
        cout<<"The Fibonacci number for " <<n<< " is ";
        for(; i>=0; i--)
        {
            cout<<fb[n][i];
        }
        cout<<endl;
    }
    return 0;
}
/// DO PEN AND PAPER WORK AFTER READING QUESTIONS CAREFULLY
/// Be confident to Solve if other can do.***
/// Common sense: do something instead of nothing
/// Even a single second counts...
/// If other's can do it, even I can do it. It wouldn't be that tough. Let me give it a try.
/// Mistakes made in past
/// -Ques. ask for max-min => think binary_search, DP, greedy
/// -not reading question properly / skipping to read & understand all samples properly & wasting time in wrong direction.
/// -Using wrong indexing in nested loops something like a[i], when it is supposed to be a[j](WA)
/// -value of const int N is not correct (WA/RTE).
/// -Did you memset dp to -1 ?
/// -check for small edges cases and work on small test cases manually if WA
/// -not deallocating memory to pointers can lead to MLE. Use delete :))
/// -not reading problem statements of harder problems E,..., thinking it couldn't be solved, but it isn't the case.
/// -Avoid using #define int long long as much as possible when it's dp problem and requires high memory say, O(N^2, N=5000) (MLE)
/// -Check Bitwise Operator Precedence
/// -Use pragmas to optimize (by constant factor) when necessary..
/// -Think before coding & starting to debug. Have patience to look inside code and actually see how it works

