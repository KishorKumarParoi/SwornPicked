//13-09-19 7.54pm
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
                sum+=((a.v[i][k]%mod)  *(b.v[k][j]%mod))%mod;
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
        int n;
        cin>>n;
        matrix mat;
        mat.row=mat.col=4;
        for(int i=0; i<4; i++)
        {
            for(int j=0; j<4; j++)
            {
                mat.v[i][j]=0;
            }
        }

        /*
        f(n)=f(n-1)+f(n-2)+g(n-1)+h(n-1)
        g(n)=f(n-2)+h(n-1)
        h(n)=f(n-2)+g(n-1)
        */
        mat.v[0][0]=1,mat.v[0][1]=1,mat.v[0][2]=1,mat.v[0][3]=1;
        mat.v[1][0]=1,mat.v[2][1]=1,mat.v[2][3]=1,mat.v[3][1]=1,mat.v[3][2]=1;

        printf("Case %d: ",kase++);
        if(n<3)
        {
            if(n==1)
                cout<<1<<endl;
            if(n==2)
                cout<<2<<endl;
        }
        else
        {
            mat=power(mat,n-2,mod);
            /*
            |f(2)|   |2*2matrix so f(2)=2
            |f(1)|    |2*1 matrix so f(1)=1
            |g(2)| = |2*2 matrix so g(2) = h(1)+f(1) as,we can get no h(1) ...  type so h(1)=0 and f(1)=1
                                                                                                     ....
            |g(1)|    |2*2 matrix so h(2) = g(1)+f(1) as,we can get no g(1) ...... type so g(1)=0 and f(1)=1
                                                                                                     ....
            */
            int ans=(2*mat.v[0][0])%mod+(1*mat.v[0][1]%mod)+(1*mat.v[0][2]%mod)+(1*mat.v[0][3]%mod);
            ans%=mod;
            cout<<ans<<endl;
        }
    }
}

