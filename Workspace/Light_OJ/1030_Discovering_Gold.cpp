#include<bits/stdc++.h>
#define _fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
double arr[200];
int main()
{
    _fastio;

    int kase=1;
    int t,n,i,j,k,m;
    double sum;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(j=0; j<n; j++)
            cin>>arr[j];
        for(j=n-2; j>=0; j--)
        {
            sum=m=0;
            for(k=j+1; k<n && m<6; k++,m++ )
            {
                sum+=arr[k];
            }
            arr[j]+=sum/m;
        }
        printf("Case %d: %.7lf\n",kase++,arr[0]);
    }
}
