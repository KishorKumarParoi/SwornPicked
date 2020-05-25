#pragma GCC optimize("O3")
#pragma GCC target("arch=corei7-avx")

//copied just for learning

#include <iostream>
#include <cstdio>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <cassert>
#include <cmath>
#include <queue>
#include <ctime>

using namespace std;

#define REP(i, n) for(int (i) = 0; (i) < (n); (i)++)
#define SZ(a) (int)(a).size()
#define ALL(a) (a).begin(), (a).end()

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    map<int, int> h;
    REP(i, n)
    {
        int x;
        cin >> x;
        ++h[x];
    }
    for (auto p : h)
    {
        if (p.second > (n + 1) / 2)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
