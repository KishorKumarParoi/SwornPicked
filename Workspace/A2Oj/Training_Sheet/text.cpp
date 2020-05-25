//9-12-19
#include<bits/stdc++.h>

#define Pi acos(-1.0)
#define ll long long
#define uu first
#define vv second
#define scl(n) scanf("%lld",&n)
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
#define rep(i,a,b)  for(int i=a;i<=b;i++)
#define For(i,n) for(ll i=0;i<n;i++)

//Debug Macros
#define deb(a) cout << #a << " : " << a << " ";
#define debln(a) cout<< #a <<" : " << a << endl;
#define open  freopen("input.txt","r",stdin);
#define close freopen ("output.txt","w",stdout);

//Print Macros
#define print(v)  for(auto x : v) {  cout<<x;   }  cout<<endl;
#define PRINT(v)  for(auto x : v) { cout<<x.uu<<" "<<x.vv<<endl; }

using namespace std;



int main()
{
    open;
    close;

    ll t,n,i;
    scl(t);


    while(t--)
    {

        scl(n);

        vector<ll>v;
        For(i,n)
        {

            ll x;
            scl(x);
            v.eb(x);
        }

        for(i=0; i<n-1; i++)
        {

            if(v[i]>v[i+1] || v[i+1]==0)
                continue;
            else
                break;
        }

        if(i==n-1)
        {
            puts("-1");
            continue;
        }


        int d1=0;
        for(ll i=n-1,j=0; i>=0; i--,j++)
        {

            // cout<<v[i]<<" "<<v[i-1]<<endl;

            if(v[i-1]<v[i])
            {

                d1=i-1;
                //   cout<<"d1= "<<d1<<endl;
                break;
            }



        }
        //cout<<endl;

        ll d2=0,i;
        for( i=d1+1; i<n; i++)
        {

            // cout<<v[i]<<" "<<v[d1]<<endl;

            if(v[d1]>v[i])
            {

                d2=i-1;
                // cout<<"d2= "<<d2<<endl;
                break;
            }

            if(v[d1]==0&& v[i]>0)
            {

                d2=i;
                // cout<<"d2= "<<d2<<endl;
                break;
            }

        }
        if(i==n)
            d2=n-1;

        swap(v[d1],v[d2]);

        //cout<<"after swapping : ";
        // print(v);

        sort(v.begin()+d1+1,v.begin()+n);

        print(v);

    }

    return 0;
}



