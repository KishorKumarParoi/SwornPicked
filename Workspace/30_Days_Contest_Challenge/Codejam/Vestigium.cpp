//4-4-20
#include<bits/stdc++.h>

#define Pi acos(-1.0)
#define mod 1000000007
#define U unsigned
#define intlong long
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
#define FOR(i,a,b) for(inti=a;i<=b;i++)
#define rep(i,a,b)  for(int i=a;i<=b;i++)
#define For(i,n) for(int i=0;i<n;i++)

//Debug Macros
#define deb(a) cout << #a << " : " << a << " ";
#define debln(a) cout<< #a <<" : " << a << endl;
#define open  freopen("input.txt","r",stdin);
#define close freopen ("output.txt","w",stdout);

//Print Macros
#define print(v)  for(auto x : v) {  cout<<x<<" ";   }  cout<<endl;
#define PRINT(v)  for(auto x : v) { cout<<x.uu<<" "<<x.vv<<endl; }

/*
intfor_binarySearch(inta,intb,intaa[],intx){while(a<=b){intmid=(a+b)/2;if(aa[mid]==x) return 1;else if(aa[mid] > x) b=mid-1;else a=mid+1;}return -1;}
intlwr_bound(inta,intb,intaa[],intx){intidx=-1,mid; while(a<=b){mid=a+(b-a)/2; if(aa[mid]>=x) { if(aa[mid]==x) idx = mid; b=mid-1;} else a = mid+1; } return idx ; }
intuppr_bound(inta,intb,intaa[],intx){intidx=-1,mid; while(a<=b){mid=a+(b-a)/2; if(aa[mid]<=x) { if(aa[mid]==x) idx = mid; a=mid+1;} else b = mid-1; }
return idx ;}
intfor_gcd(inta,intb){if(a==0) return b;else return for_gcd(b%a,a);}
intfor_prime(intx){for (inti=2;i*i<=x;i++){if(x%i==0) return 0;}return 1;}
void for_swap(char *x,char *y){char temp;temp=*x;*x=*y;*y=temp;}
intfor_big_mod(intb,intp,intm){if(p==0) return 1;else if(p%2==0){intk=for_big_mod(b,p/2,m);return (k*k)%m;}else return ((b%m)*(for_big_mod(b,p-1,m)))%m;}
intfor_josephus(intn,intk){if(n==1) return 1;return (for_josephus(n-1,k)+k-1)%n+1;}
intfor_gcdExtended(inta,intb,int*x,int*y){if(a==0){*x=0;*y=1;return b;}intx1,y1;intgcd=for_gcdExtended(b%a,a,&x1,&y1);*x=y1-(b/a)*x1;*y=x1;return gcd;}
*/

#define fastio  ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;


int main()
{
    //open
    //close
    //fastio

    int t,n,kase=1;
    scl(t);

    while(t--)
    {
        scl(n);
        int a[110][110];
        int x=0,y=0,aa,bb,trace=0;

        for(int i=1; i<=n; i++)
            for(int j=1; j<=n; j++)
            {
                cin>>a[i][j];
                if(i==j)
                    trace+=a[i][j];
            }


        for(int i=1; i<=n; i++)
        {
            int mark[n+10]= {0},f=0;
            for(int j=1; j<=n; j++)
            {
                if(f==1)
                    continue;

                aa = a[i][j];
                if(mark[aa]==1)
                {
                    x++;
                    //deb(x) deb(aa) debln(mark[aa])
                    f = 1;
                }
                mark[aa ]= 1;
                // deb(x) debln(mark[aa])
            }

        }

        for(int i=1; i<=n; i++)
        {
            int mark[n+10]= {0},f=0;
            for(int j=1; j<=n; j++)
            {
                if(f==1)
                    continue;

                aa = a[j][i];
                if(mark[aa]==1)
                {
                    y++;
                    //deb(x) deb(aa) debln(mark[aa])
                    f = 1;
                }
                mark[aa ]= 1;
                // deb(x) debln(mark[aa])
            }

        }

        printf("Case #%d: %d %d %d\n",kase++,trace,x,y);
    }
    return 0;
}



