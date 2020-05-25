//11-08-19 10.22am
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,kase=1,n,i,j,k,people;
    cin>>t;
    while(t--)
    {
        cin>>n;
        double res=1.00;
        double probability=0.00;
        people=0;
        for(i=n; probability<.5; i--)
        {
            res=res*((double)i/n);
           // cout<<res<<endl;
            probability=1-res;
           // cout<<probability<<endl;
            if(probability<.5)
                people++;
           // cout<<people<<endl;
        }
        printf("Case %d: %d\n",kase++,people);
    }
    return 0;
}
