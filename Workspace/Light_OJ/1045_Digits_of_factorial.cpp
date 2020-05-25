//10--8-19 8.42pm
#include<bits/stdc++.h>
using namespace std;
double logg[1000005];
int main()
{
    int i,kase=1,n,b,t;
    cin>>t;
    for(int i=1; i<=1000000; i++)
    {
        logg[i]=logg[i-1]+log(i);
        //cout<<logg[i]<< " "<<logg[i-1]<< " "<<log(i)<<endl;
    }
   // cout<<log(10)<<" "<<logg[10]<<endl;
    while(t--)
    {
        cin>>n>>b;
        long long int cnt=logg[n]/log(b);
        printf("Case %d: %lld\n",kase++,cnt+1);
    }
    return 0;
}
