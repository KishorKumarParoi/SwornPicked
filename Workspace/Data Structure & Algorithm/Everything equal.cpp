#include<bits/stdc++.h>
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
#include<iostream>

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

using namespace std;
int main()
{
    long long int i,n,q,t,l,r,j,x,cnt;
    int  a[50001];
    cin>>t;
    while(t--)
    {
        cin>>n>>q;
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        while(q--)
        {
            cin>>l>>r;
            cnt=0;
            for(j=l-1; j<r-1; j++)
            {
                sort(a+l-1,a+r-1);
            }
            for(j=l-1; j<r-1; j++)
            {
                x=((a[r-1]+a[l-1])/2);
                cnt+=abs(((x)-a[j]));
            }
            cout<<cnt<<endl;
        }
    }
}
