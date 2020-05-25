//14-09-19 2.34pm
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
struct matrix
{
    ll v[25][25];
    ll row,col;
};

ll mod;
matrix multiply(matrix a,matrix b,ll mod)
{
    assert(a.col==b.row);
    matrix r;
    r.row=a.row;
    r.col=b.col;
    for(ll i=0; i<r.row; i++)
    {
        for(ll j=0; j<r.col; j++)
        {
            ll sum=0;
            for(ll k=0; k<b.row; k++)
            {
                if(a.v[i][k]<0)
                    a.v[i][k]= (a.v[i][k] %mod) +mod;

                if(a.v[k][j]<0)
                    a.v[k][j]= (a.v[k][j] %mod)+mod;

                sum+=((a.v[i][k]%mod) * (b.v[k][j]%mod))%mod;
                sum%=mod;
            }
            r.v[i][j]=sum%mod;
        }
    }
    return r;
}

matrix power(matrix mat,ll p,ll mod)
{
    if(p==1)
        return mat;
    if(p%2)
        return multiply(mat,power(mat,p-1,mod),mod);
    matrix ret=power(mat,p/2,mod);
    return multiply(ret,ret,mod);
}

int main()
{

    ll tc,i,j,k,kase=1;
    cin>>tc;
    while(tc--)
    {
        ll k,n;
        cin>>k>>mod>>n;

        ll C[k+3],a[k+3];

        for(i=0; i<k+1; i++)
            cin>>C[i];

        for(i=0; i<k; i++)
            cin>>a[i];

        matrix mat;
        mat.row=mat.col=k+1;


        for( i=0; i<k+1; i++)
        {
            for( j=0; j<k+1; j++)
            {
                if(i==j+1)
                    mat.v[i][j]=1;
                else
                    mat.v[i][j]=0;
            }
        }


        for(i=0; i<k+1; i++)
            mat.v[0][i]=C[i];

        mat.v[k][k-1]=0;
        mat.v[k][k]=1;

        printf("Case %lld: ",kase++);
        if(n<k)
        {
            cout<<a[n]<<endl;
            continue;
        }

        if(n==k)
        {
            ll ans=0;
            for(ll i=1; i<=k; i++)
            {
                if(C[i]<0)
                    C[i]=(C[i]%mod) +mod;
                if(a[n-i]<0)
                    a[n-i]=(a[n-i] %mod) +mod;

                ans+=((C[i-1]%mod)*(a[n-i]%mod))%mod;
            }
            //ans%=mod;
            if(C[k]<0)
                C[k]=(C[k]%mod)+mod;
            ans+=((C[k])%mod);
            cout<<ans%mod<<endl;
        }
        else
        {
            mat=power(mat,n-1,mod);
            ll ans=0;
            ll x=k-1;
            for(i=0; i<k; i++)
            {
                if(a[x]<0 )
                    a[x]=(a[x]%mod)+mod;

                if(mat.v[0][i]<0)
                    mat.v[0][i]=(mat.v[0][i]%mod)+mod;

                ans+=((mat.v[0][i]%mod) * (a[x]%mod))%mod;
                x--;
            }
            if(C[k]<0 )
                C[k]=(C[k] %mod)+mod;

            if(mat.v[0][k]<0)
                mat.v[0][k]=(mat.v[0][k]%mod)+mod;

            ans+=((mat.v[0][k]%mod )* (C[k]%mod))%mod;
            ans%=mod;
            cout<<ans<<endl;
        }

    }
    return 0;
}

