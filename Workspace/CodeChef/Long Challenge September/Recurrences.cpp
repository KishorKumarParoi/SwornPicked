//11-09-19 1.47pm
#include<bits/stdc++.h>
#define open                                  freopen("input.txt","r",stdin)         //opening input file
#define close                                  freopen ("output.txt","w",stdout)     //opening output file

using namespace std;

struct matrix
{
    int v[16][16];
    int row,col;
} mat_I_Love_U;

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
    //open;
    //close;
    int kase=1;
    int a,b,d,n,m;



    while(cin>>d>>n>>m)   //3 5 100
    {
        matrix mat;
        mat.row=mat.col=d;       //d=3
        //memset(&mat_I_Love_U,0, sizeof(matrix));
        for(int i=0; i<d; i++)
        {
            for(int j=0; j<d; j++)
            {
                mat.v[i][j]=0;
            }
        }
        mod=m;   //mod(1<=m<=46340)    // 100

        if(n==0 && d==0 && m==0)
            return 0;
        //vector<int>first;
        // vector<int>second;

        int first[16],second[16];

        //a1,a2,---ad             //1 1 1
        for(int i=0; i<d; i++)
        {
            scanf("%d",&first[i]),first[i]%=mod;
            //first.push_back(x);
        }

        //function value     // 1 1 1
        for(int i=0; i<d; i++)
        {
            //int y;
            scanf("%d",&second[i]),second[i]%=mod;
            //second.push_back(y);
        }

        //printf("Case %d: ",kase++);

        for(int i=0; i<d; i++)
        {
            mat.v[0][i]=first[i];                   //0----(d-1) == (a1-----ad)
        }

        for(int i=1; i<d; i++)
        {
            for(int j=0; j<d; j++)
            {
                if(i==j+1)
                {
                    mat.v[i][j]=1;                      //1,0-2,1
                }
            }
        }


        if(n<=d)
        {
            cout<<second[n-1]%mod<<endl;           //f3=1 f2=1 f1=1
        }
        else
        {
            mat=power(mat,n-d,mod);                  //mat,5-2,mod
            int ans=0;
            int x=d;
            for(int i=0; i<d; i++)
            {
                ans+=(second[x-1]*mat.v[0][i])%mod;
                x--;
            }
            //int ans=b*mat.v[0][0]+a*mat.v[0][1];
            ans%=mod;
            cout<<ans<<endl;
        }
    }
    return 0;
}

