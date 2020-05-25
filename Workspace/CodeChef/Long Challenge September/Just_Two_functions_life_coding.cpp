#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll MOD;

struct matrix
{
    ll mat[7][7];
    int row,col;

    matrix()
    {
        memset(mat,0,sizeof mat);
    }
    matrix(int a, int b)
    {
        row=a,col=b;
        memset(mat,0,sizeof mat);
    }

    matrix operator*(const matrix &p) const
    {
        assert(col == p.row);
        matrix temp;
        temp.row = row;
        temp.col = p.col;
        for (int i = 0; i < temp.row; i++)
        {
            for (int j = 0; j < temp.col; j++)
            {
                ll sum = 0;
                for (int k = 0; k <col;  k++)
                {
                    sum += ((mat[i][k]%MOD) * (p.mat[k][j]%MOD))%MOD;
                    sum%=MOD;
                }
                temp.mat[i][j] = sum;
            }
        }
        return temp;
    }
    matrix operator+ (const matrix &p) const
    {
        assert(row==p.row && col==p.col);
        matrix temp;
        temp.row=row;
        temp.col=col;
        for(int i=0; i<temp.row; i++)
        {
            for(int j=0; j<temp.col; j++)
                temp.mat[i][j]=((mat[i][j]%MOD)+(p.mat[i][j]%MOD))%MOD;;
        }
        return temp;
    }

    matrix identity()
    {
        matrix temp;
        temp.row=row;
        temp.col=col;
        for(int i=0; i<row; i++)
            temp.mat[i][i]=1;
        return temp;
    }

    matrix pow(ll pow)
    {
        matrix temp=(*this);
        matrix ret=(*this).identity();
        while(pow)
        {
            if(pow % 2==1)
                ret=ret*temp;
            temp=temp*temp;
            pow/=2;
        }
        return ret;
    }

    void show()
    {
        printf("-----------------------------\n");
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
                printf("%lld ",mat[i][j]);
            printf("\n");
        }
        printf("-----------------------------\n");
    }

};

/*--------------------------Matrix End---------------------*/

int main()
{

    ///freopen("in.txt","r",stdin);
    ///freopen("out.txt","w",stdout);

    int t,kase=1;
    cin>>t;
    while(t--)
    {
        int a1,b1,c1,a2,b2,c2,f0,f1,f2,g0,g1,g2;
        cin>>a1>>b1>>c1;
        cin>>a2>>b2>>c2;
        cin>>f0>>f1>>f2;
        cin>>g0>>g1>>g2;
        cin>>MOD;


        matrix base(6,6);
        base.mat[0][0]=a1;
        base.mat[0][1]=b1;
        base.mat[0][5]=c1;
        base.mat[1][0]=1;
        base.mat[2][1]=1;
        base.mat[3][2]=c2;
        base.mat[3][3]=a2;
        base.mat[3][4]=b2;
        base.mat[4][3]=1;
        base.mat[5][4]=1;

        matrix temp(6,1);
        temp.mat[0][0]=f2%MOD;
        temp.mat[1][0]=f1%MOD;
        temp.mat[2][0]=f0%MOD;
        temp.mat[3][0]=g2%MOD;
        temp.mat[4][0]=g1%MOD;
        temp.mat[5][0]=g0%MOD;

        int q;
        cin>>q;
        printf("Case %d:\n",kase++);
        while(q--)
        {
            int n;
            cin>>n;
            ll ans1,ans2;
            if(n<=2)
            {
                ans1=temp.mat[2-n][0];
                ans2=temp.mat[5-n][0];
            }
            else
            {
                matrix power=base.pow(n-2);
                power = power*temp;
                ans1=power.mat[0][0];
                ans2=power.mat[3][0];
            }
            printf("%lld %lld\n",ans1,ans2);
        }


    }

    return 0;
}
