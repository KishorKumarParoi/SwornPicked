//11-19-19 11.44pm
#include<bits/stdc++.h>

#define Pi acos(-1.0)
#define ll long long
#define scl scanf("%d",&l)
#define scll scanf("%lld", &l)
#define pb push_back
#define eb emplace_back

#define all(c) (c).begin(),(c).end()
#define open  freopen("input.txt","r",stdin)
#define close freopen ("output.txt","w",stdout)
#define _fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;

int main()
{
    // open;
    //close;
    _fastio;

    int t;
    cin>>t;
    while(t--)
    {
        int n,i,m;
        cin>>n>>m;
        vector<int>v(n);

        for(i=0; i<n; i++)
        {
            cin>>v[i];
        }
        if(m<n || m>n || (n==2))
        {
            cout<<-1<<endl;
            continue;
        }
        else
        {
            int sum=0;
            for(i=1; i<n; i++)
            {
                sum+=v[i-1]+v[i];
            }
            sum+=v[0]+v[n-1];
            cout<<sum<<endl;
            for(i=1; i<n; i++)
            {
                cout<<(i)<<" "<<(i+1)<<endl;
            }
            cout<<(1)<<" "<<n<<endl;

        }

    }

    return 0;
}


