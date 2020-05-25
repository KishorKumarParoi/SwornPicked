//11-09-19 3.24pm
#include<bits/stdc++.h>
using namespace std;

struct matrix
{
    int v[5][5];
    int row,col;
};

//int mod=10000;
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
        int a,b,n,m;
        cin>>a>>b>>n>>m;
        matrix mat;
        mat.row=mat.col=2;
        mat.v[0][0]=mat.v[0][1]=mat.v[1][0]=1;
        mat.v[1][1]=0;
        int mod=1;
        for(int i=0; i<m; i++)
            mod*=10;
        printf("Case %d: ",kase++);
        if(n<3)
        {
            if(n==0)
                cout<<a<<endl;
            if(n==1)
                cout<<b<<endl;
            if(n==2)
                cout<<(a+b)%mod<<endl;
        }
        else
        {
            mat=power(mat,n-1,mod);
            int ans=b*mat.v[0][0]+a*mat.v[0][1];
            ans%=mod;
            cout<<ans<<endl;
        }
    }
}
