//21-11-19 10.56am
#include<bits/stdc++.h>

#define Pi acos(-1.0)
#define ll long long
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
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);

        priority_queue<ll,vector<ll>, greater <ll> > pq;

        for(int i=0; i<n; i++)
        {
            int x;
            scanf("%d",&x);
            pq.push(x);
        }

        ll cost=0;
        while(pq.size()>1)
        {
            ll a=pq.top();
            pq.pop();
            ll b=pq.top();
            pq.pop();

            cost+=(a+b);
            pq.push(a+b);
        }

        cout<<cost<<endl;
    }
    return 0;
}

