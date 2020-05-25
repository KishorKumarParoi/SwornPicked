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
#define int           long long
#define pb            push_back
#define mp            make_pair
#define PI            3.14159265
#define M             1000000007
#define MM            998244353
#define fr            first
#define sc            second
#define all(v)        (v).begin(),(v).end()
#define rall(v)       (v).rbegin(),v.rend()
#define vc            vector
#define vi            vector<int>
#define pii           pair<int,int>
#define psi           pair<string,int>
#define pis           pair<int,string>
#define mii           map<int,int>
#define msi           map<string,int>
using namespace std;

int solve()
{
    int n;
    cin>>n;
    int a[13];
    for (int i = 1; i <= 12; ++i)
    {
        cin>>a[i];
    }
    sort(a+1,a+13);
    int i=12,s=0;
    while(n>0)
    {
        n-=a[i];
        i--;
        s++;
        if(s>12)
        {
            cout<<-1;
            return 0;
        }
    }
    cout<<s;
}

signed main()
{
    ios::sync_with_stdio(false);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t=1;
    //cin>>t;
    while(t--)
        solve();
    return 0;
}
