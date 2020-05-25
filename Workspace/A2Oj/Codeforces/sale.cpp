#include<bits/stdc++.h>
#include<iostream>

using namespace std;

typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;

#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define X first
#define Y second
#define pb push_back
#define int long long

const LL mod = 1e9 + 7;

void chkmax(int &a, int b)
{
    a = max(a, b);
    return;
}

void chkmin(int &a, int b)
{
    a = min(a, b);
    return;
}

LL ppow (LL x, LL s)
{
    if (!s)
        return 1;
    if (!(s - 1))
        return x % mod;
    if (s % 2)
        return (x * ppow (x, s - 1)) % mod;
    LL b = ppow (x, s / 2);
    return (b * b) % mod;
}

vector<vector<int> > gr;
vector<int> ans;

int dfs(int u, int prev)
{
    ans[u] = prev;
    for (auto x : gr[u])
    {
        if (x != prev)
        {
            dfs(x, u);
        }
    }
    return 0;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int q;
        cin >> q;
        if (q < 0)
        {
            a.pb(q);
        }
    }
    sort(all(a));
    n = a.size();
    int ans = 0;
    for (int i = 0; i < min(n, m); i++)
    {
        ans -= a[i];
    }
    cout << ans;
    return 0;
}
