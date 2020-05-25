//11-09-19 4.50pm
#include<bits/stdc++.h>
using namespace std;

struct matrix
{
    int v[5][5];
    int row,col;
};

int mod=10007;
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
                sum+=a.v[i][k]*b.v[k][j];
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
    int tc,kase=1;
    cin>>tc;
    while(tc--)
    {
        int a,b,n,c;
        cin>>n>>a>>b>>c;
        matrix mat;
        mat.row=mat.col=4;
        mat.v[0][0]=a;
        mat.v[0][1]=0;
        mat.v[0][2]=b;
        mat.v[0][3]=1;
        mat.v[1][0]=1;
        mat.v[2][1]=1;
        mat.v[3][3]=1;
        mat.v[1][1]=0;
        mat.v[1][2]=0;
        mat.v[1][3]=0;
        mat.v[2][0]=0;
        mat.v[2][2]=0;
        mat.v[2][3]=0;
        mat.v[3][0]=0;
        mat.v[3][1]=0;
        mat.v[3][2]=0;

        printf("Case %d: ",kase++);
        if(n<=2)
        {
            cout<<0<<endl;
        }
        else
        {
            mat=power(mat,n-2,mod);
            int ans=c*mat.v[0][3];
            ans%=mod;
            cout<<ans<<endl;
        }
    }
}
