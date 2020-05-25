//10-08-19 11.40am
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
int main()
{
    string mnth[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    string m1,m2;
    ll t,d1,d2,y1,y2;
    char ch;
    map<string,int> mp;
    for(int i=0; i<12; i++)
        mp[mnth[i]]=i;
    cin>>t;
    int kase=1;
    while(t--)
    {
        cin>>m1>>d1>>ch>>y1;
        cin>>m2>>d2>>ch>>y2;
        if(mp[m1]>1)
            y1++;
        if(mp[m2]==0 || (mp[m2]==1 && d2<29))
            y2--;
        ll ans=y2/4-(y1-1)/4;
        //cout<<ans<<endl;
        ans-=y2/100-(y1-1)/100;
        //cout<<ans<<endl;
        ans+=y2/400 - (y1-1)/400;
       // cout<<ans<<endl;
        printf("Case %d: %lld\n",kase++,ans);
    }
    return 0;
}
