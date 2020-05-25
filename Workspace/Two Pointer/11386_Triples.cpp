#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("output.txt","w",stdout);
    int n;
    while(scanf("%d",&n)!=EOF)
    {

        vector<int>v;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }

        sort(v.begin(),v.end());

        int cnt,ans=0;
        int lim;
        if(n%2)
            lim=n/2+1;
        else
            lim=n/2;

        for(int i=1; i<n; i++)
        {
            int x=v[i];
            int lo=0;
            int hi=n-1;
            cnt=0;

            while(lo<lim)
            {
                while((v[lo]+v[hi])>x )
                    hi--;
                if((v[lo]+v[hi])==x && hi>0 && v[lo]!=v[hi])
                {
                    cnt++;
                    cout<<x<<endl;
                    //cout<<lo<<" "<<hi<<endl;
                    cout<<v[lo]<<" "<<v[hi]<<endl;
                    cout<<"cnt = "<<cnt<<endl;
                }
                lo++;
            }
            ans+=cnt;
        }
        cout<<ans<<endl;
    }
    return 0;
}
