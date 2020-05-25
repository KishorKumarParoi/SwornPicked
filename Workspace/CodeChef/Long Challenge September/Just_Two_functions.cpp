//12-09-19 7.16pm
#include<bits/stdc++.h>
using namespace std;
#define open                                  freopen("input.txt","r",stdin)         //opening input file
#define close                                  freopen ("output.txt","w",stdout)     //opening output file
#define _fastio                              ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int ans1,ans2;

struct matrix
{
    int v[7][7];
    int row,col;
};

int mod;
matrix multiply(matrix a,matrix b,int mod)
{
    assert(a.col==b.row);
    matrix r;
    r.row=a.row;
    r.col=b.col;
    for(int i=0; i<r.row; i++)
    {
        for(int j=0; j<r.col; j++)
        {
            int sum=0;
            for(int k=0; k<b.row; k++)
            {
                sum+=(a.v[i][k]*b.v[k][j])%mod;
                sum%=mod;
            }
            r.v[i][j]=sum;
        }
    }
    return r;
}

matrix power(matrix mat,int p,int mod)
{
    assert(p>=1);
    if(p==1)
        return mat;
    if(p%2)
        return multiply(mat,power(mat,p-1,mod),mod);
    matrix ret=power(mat,p/2,mod);
    return multiply(ret,ret,mod);
}

int main()
{
    _fastio;
    //open;
    //close;
    int tc,kase=1;
    cin>>tc;

    while(tc--)
    {
        int a1,a2,b1,b2,c1,c2,f0,f1,f2,g0,g1,g2,q,n,m;
        cin>>a1>>b1>>c1;
        cin>>a2>>b2>>c2;
        cin>>f0>>f1>>f2;
        cin>>g0>>g1>>g2;
        cin>>m;
        mod = m;               //mod


        cin>>q;

        while(q--)
        {

            cin>>n;

            matrix mat1,mat2;
            mat1.row=mat1.col=6;
            mat2.row=mat2.col=6;

            //initializing mat1=0
            for(int i=0; i<6; i++)
            {
                for(int j=0; j<6; j++)
                {
                    mat1.v[i][j]=0;
                }
            }

            //initializing mat2=0
            for(int i=0; i<6; i++)
            {
                for(int j=0; j<6; j++)
                {
                    mat2.v[i][j]=0;
                }
            }

            //updating value by mod
            a1%=mod,b1%=mod,c1%=mod;
            a2%=mod,b2%=mod,c2%=mod;
            f0%=mod,f1%=mod,f2%=mod;
            g0%=mod,g1%=mod,g2%=mod;

            //from equation handwritten

            mat1.v[0][0]=a1,  mat1.v[0][1]=b1,  mat1.v[0][2]=0, mat1.v[0][3]=0, mat1.v[0][4]=0, mat1.v[0][5]=c1;
            mat1.v[1][0]=1,mat1.v[2][1]=1,mat1.v[3][2]=c2,mat1.v[3][3]=a2,mat1.v[3][4]=b2,mat1.v[4][3]=1,mat1.v[5][4]=1;

            mat2.v[0][0]=a2,  mat2.v[0][1]=b2,  mat2.v[0][2]=0, mat2.v[0][3]=0, mat2.v[0][4]=0, mat2.v[0][5]=c2;
            mat2.v[1][0]=1, mat2.v[2][1]=1,mat2.v[3][2]=c1,mat2.v[3][3]=a1,mat2.v[3][4]=b1,mat2.v[4][3]=1,mat2.v[5][4]=1;

            //getting f3 and g3 for mat expo
            // f(n) = a1 * f(n-1) + b1 * f(n-2) + c1 * g(n-3)
            // g(n) = a2 * g(n-1) + b2 * g(n-2) + c2 * f(n-3)

            int f3=(a1*f2)%mod + (b1*f1)%mod  +  (c1*g0)%mod;
            int  g3=(a2*g2)%mod + (b2*g1)%mod  +  (c2*f0)%mod;
            f3%=mod;
            g3%=mod;


            if(n<=3)
            {
                if(n==0)
                {
                    cout<<(f0)<<" "<<(g0)<<endl;
                }
                if(n==1)
                {
                    cout<<(f1)<<" "<<(g1)<<endl;
                }
                if(n==2)
                {
                    cout<<(f2)<<" "<<(g2)<<endl;
                }
                if(n==3)
                {
                    cout<<(f3)<<" "<<(g3)<<endl;
                }
            }

            else
            {
                //printing mat1 & mat2
                ans1=0;
                ans2=0;
                mat1=power(mat1,n-2,mod);
                ans1=(mat1.v[0][0]*f2)%mod + (mat1.v[0][1]*f1)%mod + (mat1.v[0][2]*f0)%mod + (mat1.v[0][3]*g2)%mod + (mat1.v[0][4]*g1)%mod + (mat1.v[0][5]*g0 )%mod ;
                ans1%=mod;


                mat2=power(mat2,n-2,mod);
                ans2=(mat2.v[0][0]*g2)%mod + (mat2.v[0][1]*g1)%mod + (mat2.v[0][2]*g0)%mod + (mat2.v[0][3]*f2)%mod + (mat2.v[0][4]*f1)%mod + (mat2.v[0][5]*f0)%mod;
                ans2%=mod;
                cout<<ans1<< " "<<ans2<<endl;
            }

        }
        printf("Case %d:\n",kase++);

    }
    return 0;
}
