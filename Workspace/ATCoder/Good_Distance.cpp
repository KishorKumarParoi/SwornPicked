#include<bits/stdc++.h>
using namespace std;

int x[25][25];
int main()
{
    int n,d;
    cin>>n>>d;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<d; j++)
        {
            cin>>x[i][j];
        }
    }

    int ans=0;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            int sum=0;
            for(int k=0; k<d; k++)
            {
                sum+=((x[i][k]-x[j][k])*(x[i][k]-x[j][k]));
            }
            for(int k=1; k<=1000; k++)
            {
                if(k*k==sum)
                    ans++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
