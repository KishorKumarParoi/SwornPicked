//11-09-19 9.33pm
#include<bits/stdc++.h>
#define ull unsigned long long int
#define open                                  freopen("input.txt","r",stdin)         //opening input file
#define close                                  freopen ("output.txt","w",stdout)     //opening output file
//ull x=18446744073709551616;
//ull mod=18446744073709551615 ;
ull p,q,n;
using namespace std;

void multiply(ull F[2][2],ull M[2][2])
{
    ull x=(F[0][0]*M[0][0] + F[0][1]*M[1][0]);
    ull y=(F[0][0]*M[0][1] + F[0][1]*M[1][1]);
    ull z=(F[1][0]*M[0][0] + F[1][1]*M[1][0]);
    ull w=(F[1][0]*M[0][1] + F[1][1]*M[1][1]);
    F[0][0]=x;
    F[0][1]=y;
    F[1][0]=z;
    F[1][1]=w;
}

void power(ull F[2][2],ull n)
{
    if(n==0 || n==1)
        return;
    ull M[2][2]= {{p,-q},{1,0}};
    power(F,n/2);
    multiply(F,F);
    if(n%2!=0)
        multiply(F,M);
}

ull fibo(ull n)
{
    ull F[2][2]= {{p,-q},{1,0}};
    power(F,n-1);
    return (F[0][0])*p + (F[0][1])*2;
}
int main()
{
    //open;
    //close;
    int t,kase=1;
    cin>>t;
    while(t--)
    {
        cin>>p>>q>>n;
        printf("Case %d: ",kase++);
        //  cout<<p<<" "<<q<<" "<<n<<endl;
        if(n<2)
        {
            if(n==0)
                cout<<2<<endl;
            if(n==1)
                cout<<p<<endl;
        }
        else
        {
            ull ans=fibo(n);
            //   ans%=(mod+1);
            //cout<<(mod+1)<<endl;
            cout<<ans<<endl;
        }
    }
    return 0;
}
