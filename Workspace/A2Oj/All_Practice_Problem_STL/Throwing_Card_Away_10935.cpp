//18-11-19 6.55pm
#include<bits/stdc++.h>

#define Pi acos(-1.0)
#define ll long long
#define sc(l) scanf("%d",&l)
#define scll scanf("%lld", &l)

#define pll pair<ll,ll>
#define pb push_back
#define mp map<int,int>
#define pii pair<int,int>
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

    int n,i;
    while(cin>>n)
    {
        if(n==0)
            return 0;
        queue<int>q,q1;

        for(i=1; i<=n; i++)
            q.push(i);

        while(q.size()!=1)
        {
            int x= q.front();
            q1.push(x);
            q.pop();
            int y=q.front();
            q.push(y);
            q.pop();
        }

        cout<< "Discarded cards: ";
        while(!q1.empty())
        {
            if(q1.size()>1)
                cout<<q1.front()<<", ";
            else
                cout<<q1.front()<<endl;
            q1.pop();
        }

        cout<< "Remaining card: ";
        cout<<q.front()<<endl;
    }

    return 0;
}


