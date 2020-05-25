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
int n;
int a[4000];
int ans[4000][4000];

int main()
{
    cin >> n;
    map<int, int> r;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (r.find(a[i]) == r.end())
        {
            int k = r.size();
            r[a[i]] = k;
        }
        a[i] = r[a[i]];
    }
    int m = r.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (ans[j][a[i]] + 1 > ans[a[i]][j])
            {
                ans[a[i]][j] = ans[j][a[i]] + 1;
            }
            // ans[a[i]][j] = max(ans[a[i]][j], ans[j][a[i]] + 1);
        }
    }
    int best = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (ans[i][j] > best)
            {
                best = ans[i][j];
            }
        }
    }
    cout << best << endl;
    return 0;
}
/// USE PEN And PAPER mostly*****
/// *****Common sense: do something instead of NOTHING
/// ***Even a single second counts.....tiktik passing out time..
/// *****If other's can do it, even I can do it. It wouldn't be that tough. Let me give it a TRY.
/// ***Mistakes made in past
/// -Question ask for max-min => think binary_search, DP, greedy
/// *****-NOT READING question properly / skipping to read & understand all samples properly & WASTING time in wrong direction.
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

