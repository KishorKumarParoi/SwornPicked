
// Problem : B. Meeting
// Contest : Codeforces Round #103 (Div. 2)
// URL : https://codeforces.com/contest/144/problem/B
// Memory Limit : 256.000000MB
// Time Limit : 2000.000000milisec
// Powered by CP Editor (https://github.com/coder3101/cp-editor2)

// 19-12-19
#include<bits/stdc++.h>

#define Pi acos(-1.0)
#define ll long long
#define uu first
#define vv second
#define pii pair<int,int>
#define MP make_pair
#define endl "\n"
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
#define rep(i,a,b)  for(int i=a;i<=b;i++)
#define For(i,n) for(int i=0;i<n;i++)

//Debug Macros
#define deb(a) cout << #a << " : " << a <<endl;
#define open  freopen("input.txt","r",stdin);
#define close freopen ("output.txt","w",stdout);

//Print Macros
#define print(v)  for(auto x : v) {  cout<<x<<" ";   }  cout<<endl;
#define PRINT(v)  for(auto x : v) { cout<<x.uu<<" "<<x.vv<<endl; }

using namespace std;



int main()
{
    //open
    //close
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int xa,ya,xb,yb;
    int r,x,y,rr;

    scl(xa);
    scl(ya);
    scl(xb);
    scl(yb);
    scl(r);


    map<pii,int> mp,v;

    int x_min=min(xa,xb);
    int x_max=max(xa,xb);
    int y_min=min(ya,yb);
    int y_max=max(ya,yb);



    //cout<<x_min<<" "<<x_max<<" "<<y_min<<" "<<y_max<<endl;



    //yb
    rep(i,x_min,x_max)
    mp.insert(MP(MP(i,yb),0));

    //xb
    rep(i,y_min,y_max)
    mp.insert(MP(MP(xb,i),0));

    //ya
    rep(i,x_min,x_max)
    mp.insert(MP(MP(i,ya),0));

    //xa
    rep(i,y_min,y_max)
    mp.insert(MP(MP(xa,i),0));


    while(r--)
    {

        scl(x);
        scl(y);
        scl(rr);
        v.insert(MP(MP(x,y),rr));
    }

    int cnt=0,a,b;

    for(auto x : v)
    {

        int xx,yy,rc;
        xx=x.uu.uu;
        yy=x.uu.vv;
        rc=x.vv;

        /*
        for(auto k : mp){

        	cout<<k.uu.uu<<" "<<k.uu.vv<<" "<<k.vv<<endl;
        }
        */

        for(auto it = mp.begin(); it!=mp.end(); it++)
        {

            a=(it->uu).uu;
            b=(it->uu).vv;

            if((it->vv)==0 || (it->vv)==1)
            {

                int sqx = (xx-a)*(xx-a);
                int sqy = (yy-b)*(yy-b);

                int sqs = sqx + sqy;
                double sq = sqrt(sqs*1.0);

                if(sq<=(double)rc)
                {

                    it->vv=2;
                }

                else
                {

                    (it->vv)=1;
                }

                //deb(sq) deb((it->vv))
            }

            else
            {

                continue;
            }

        }

        /*
        for(auto k : mp){

        	cout<<k.uu.uu<<" "<<k.uu.vv<<" "<<k.vv<<endl;
        }

        cout<<endl;
        */
    }


    for(auto x: mp)
    {

        if(x.vv==1)
            cnt++;
    }

    //deb(cnt)

    cout<<cnt<<endl;

    return 0;
}



