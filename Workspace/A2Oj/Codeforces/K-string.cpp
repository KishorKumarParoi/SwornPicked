#include<bits/stdc++.h>
using namespace std;

//copied for only learning purpose

#define double long double
#define int long long
#define vec vector
#define pb push_back
#define unset unordered_set
#define ii pair<int, int>
#define X first
#define Y second
#define FOR(i, a, b) for(int i = (a); i < (b); i++)
#define FORE(i, a, b) for(int i = (a); i <= (b); i++)
#define FORD(i, a, b) for(int i = (a); i >= (b); i--)
#define bitcount(n) __builtin_popcountll(n)
template <typename T,typename U>
std::pair<T,U> operator+(const std::pair<T,U> & l,const std::pair<T,U> & r)
{
    return {l.first+r.first,l.second+r.second};
}
typedef void (*callback_function)(void); // type for conciseness
const long long ZERO = 0LL;
const long long INF64 = 1e18;
const int INF32 = 1e9;
const int MOD = 1e9 + 7;
const double PI = acos(-1.0L);
const double EPS = static_cast<double>(1e-9);
typedef long long ll;

inline int Pow(int a, int k)
{
    int s = 1;
    for(; k; k >>= 1)
    {
        k & 1 ? s = 1LL * s * a % MOD : 0;
        a = 1LL * a * a % MOD;
    }
    return s;
}

const int N = 1e6 + 7;

void input()
{
    //freopen("??.in", "r", stdin);
    //freopen("??.out", "w", stdout);
}

void preprocess()
{
}

void debug()
{
    //  44gg
    if (true)
    {

    }
}

int cnt[256];

void solve()
{
    preprocess();
    // 50gg
    int k;
    cin >> k;
    string s;
    cin >> s;
    for (char &ch : s)
    {
        cnt[ch]++;
    }
    string res = "";
    FORE(i, 'a', 'z')
    {
        if (cnt[i] % k)
        {
            cout << -1 << endl;
            return;
        }
        FOR(j, 0, cnt[i] / k)
        {
            res += (char)i;
        }
    }
    FOR(i, 0, k)
    {
        cout << res;
    }
    cout << endl;
    //debug();
    // read the question correctly (is y a vowel?)
    // look out for SPECIAL CASES (n=1?) and overflow (ll vs int?)
}

void output()
{

}

#undef int
int main()
{
#define int long long
    ios_base::sync_with_stdio(false);
    cin.tie();
    //auto beginProgram = chrono::steady_clock::now();

    //int t; cin >> t;
    //while (t--)
    {
        input();
        solve();
        output();
    }

    //auto endProgram = chrono::steady_clock::now();

    return 0;
}
