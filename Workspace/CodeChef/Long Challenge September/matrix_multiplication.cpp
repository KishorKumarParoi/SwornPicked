#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,m,i,j,k;
    int a[110][110];
    int b[110][110];
    cin>>n>>m>>l;
    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
            cin>>a[i][j];
    for(i=0; i<m; i++)
        for(j=0; j<l; j++)
            cin>>b[i][j];
    long long  sum;
    for(i=0; i<n; i++)
    {
        for(k=0; k<l; k++)
        {
            sum=0;
            for(j=0; j<m; j++)
            {
                sum+=a[i][j]*b[j][k];
            }
            if(k)
                cout<<" ";
            cout<<sum;
        }
        cout<<endl;
    }
    return 0;
}
