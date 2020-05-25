#include<bits/stdc++.h>
#include <time.h>
#include<iostream>
using namespace std;
#define PI acos(-1)
#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define sz size()
#define el endl
#define INF LONG_LONG_MAX
#define FAST ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);srand(time(NULL));
ll power(ll b,ll p)
{
    if(b==0)
        return 0;
    ll res=1;
    while(p)
    {
        if(p%2)
        {
            res=(res*b)%1000000007;
            p--;
        }
        else
        {
            b=(b*b)%1000000007;
            p/=2;
        }
    }
    return res;
}
ll Root(ll r,vector<ll> &root)
{
    while(root[r]!=r)
    {
        root[r]=root[root[r]];
        r=root[r];
    }
    return r;
}
void EE(ll a,ll b,ll &x,ll &y)
{
    ll t;
    if(b==0)
    {
        y=0,x=1;
        return;
    }
    EE(b,a%b,x,y);
    t=x;
    x=y;
    y=t-a/b*y;
}
void build(ll node,ll start,ll end,vector<ll> &a,vector<ll> &tree)
{
    if(start==end)
    {
        tree[node]=a[start];
        return;
    }
    ll mid=(start+end)/2;
    build(2*node,start,mid,a,tree);
    build(2*node+1,mid+1,end,a,tree);
    tree[node]=tree[2*node]+tree[2*node+1];
}
ll query(ll node,ll start,ll end,ll l,ll r,vector<ll> &tree)
{
    if(start>=l && end<=r)
    {
        return tree[node];
    }
    if(l>end || r<start)
        return 0;
    ll mid=(start+end)/2;
    return query(2*node,start,mid,l,r,tree)+query(2*node+1,mid+1,end,l,r,tree);
}
void update(ll node,ll start,ll end,ll x,ll val,vector<ll> &tree)
{
    if(start==end)
    {
        tree[node]+=val;
        return;
    }
    ll mid=(start+end)/2;
    if(x>=start && x<=mid)
        update(2*node,start,mid,x,val,tree);
    else
        update(2*node+1,mid+1,end,x,val,tree);
    tree[node]=tree[2*node]+tree[2*node+1];
}
/*ll n,m;
vector<vector<ll> > mm(vector<vector<ll> > &a,vector<vector<ll> > &b)
{
    ll r,c1,c2,i,j,k;
    r=a.sz;
    c1=b.sz;
    c2=b[0].sz;
    vector<vector<ll> > res(r,vector<ll>(c2));
    for(j=0;j<r;j++)
    {
        for(k=0;k<c2;k++)
        {
    for(i=0;i<c1;i++)
    {
        res[j][k]=(res[j][k]+a[j][i]*b[i][k])%1000000007;
    }
        }
    }
    return res;
}
vector<vector<ll> > exp(vector<vector<ll> > &M,ll power)
{
    vector<vector<ll> > id(m,vector<ll>(m));
    ll i,j;
    for(i=0;i<m;i++)
    id[i][i]=1;
    while(power>0)
    {
      //  cout<<power<<el;
        if(power%2)
        id=mm(id,M);
        M=mm(M,M);
        power/=2;

    }
    return id;
}*/
int main()
{
    FAST;
    ll n,i,c1,c2,c3,x;
    cin>>n;
    vector<ll> c(8);
    for(i=0; i<n; i++)
    {
        cin>>x;
        c[x]++;
    }
    if(c[5] || c[7] || c[1]!=n/3 || c[4]>c[2] || c[2]+c[3]!=n/3)
    {
        cout<<-1;
        return 0;
    }
    if(c[2]-c[4]+c[3]!=c[6])
    {
        cout<<-1;
        return 0;
    }
    c1=c[4],c2=c[2]-c[4],c3=c[3];
    while(c1--)
    {
        cout<<1<<" "<<2<<" "<<4<<el;
    }
    while(c2--)
    {
        cout<<1<<" "<<2<<" "<<6<<el;

    }
    while(c3--)
    {
        cout<<1<<" "<<3<<" "<<6<<el;
    }
}
