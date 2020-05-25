//2-11-19 5.15am
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int a[110][3];
    cin>>n;
    int i,j,sum,x;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=3; j++)
        {
            cin>>a[i][j];
        }
    }

    sum=0;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            sum+=a[j][i];
        }
    }

    if(sum>0 || sum<0)
        cout<< "NO\n";
    else
        cout<< "YES\n";

    return 0;
}
