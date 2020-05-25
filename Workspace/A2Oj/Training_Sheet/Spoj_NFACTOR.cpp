
// Problem : N-Factorful
// Contest : SPOJ - Classical
// URL : https://www.spoj.com/problems/NFACTOR/
// Memory Limit : 1536.000000MB
// Time Limit : 2484.000000milisec
// Powered by CP Editor (https://github.com/coder3101/cp-editor2)

//23-12-19
#include<bits/stdc++.h>

#define Pi acos(-1.0)
#define U unsigned
#define ll long long
#define uu first
#define vv second
#define endl "\n"
#define scu(n) scanf("%u",&n)
#define scl(n) scanf("%d",&n)
#define scll(n) scanf("%lld",&n)

//Vector Macros
#define pb push_back
#define eb emplace_back
#define ALL(v) v.begin(),v.end()
#define UNIQUE(v) v.erase(unique(ALL(v)),v.end())
#define MIN(c) *min_element(ALL(c))
#define MAX(c) *max_element(ALL(c))
#define SUM(c) accumulate(ALL(c),0)

//Loop Macros
#define FOR(i,a,b) for(ll i=a;i<=b;i++)
#define rep(i,a,b)  for(U i=a;i<=b;i++)
#define For(i,n) for(U i=0;i<n;i++)

//Debug Macros
#define deb(a)    cout << #a << " : " << a << " ";
#define debln(a)   cout<< #a <<" : " << a << endl;
#define open  freopen("input.txt","r",stdin);
#define close freopen ("output.txt","w",stdout);

//PrU Macros
#define prU(v)  for(auto x : v) {  cout<<x<<" ";   }  cout<<endl;
#define PRU(v)  for(auto x : v) { cout<<x.uu<<" "<<x.vv<<endl; }


/*
5
1 3 1
1 10 2
1 10 3
1 100 3
1 1000 0
*/

#define SIZE 1000010
U divisor[SIZE], F[11][SIZE];

void precompute()
{
    for(U i = 2; i < SIZE; i++)
    {
        if(divisor[i] == 0)
        {
            for(U j = i; j < SIZE; j += i)
            {
                divisor[j]++;
            }
        }
    }

    for(U n = 0; n <= 10; n++)
    {
        for(U i = 1; i < SIZE; i++)
        {
            F[n][i] = F[n][i-1] + (divisor[i] == n);
            //debln(F[n][i]) debln(F[n][i-1] )  debln(divisor[i] ==) debln(n)
        }
    }

}

U main()
{
    U T;
    scanf("%d", &T);

    precompute();
    while(T--)
    {
        U n, a, b;
        scanf("%d%d%d", &a, &b, &n);

        prUf("%d\n", F[n][b] - F[n][a-1]);

        //debln( F[n][b])   debln(F[n][a-1])
    }
    return 0;
}
