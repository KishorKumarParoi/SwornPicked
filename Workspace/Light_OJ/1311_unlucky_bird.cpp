//10-08-19 11.40pm
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t, kase= 1;
    cin>>t;
    while (t--)
    {
        double v1,v2,v3,a1,a2;
        cin >> v1 >> v2 >> v3 >> a1 >> a2;

        double t1 = v1 / a1;
        double t2 = v2 / a2;

        double s1 = 0.5 * a1 * t1 * t1;
        double s2 = 0.5 * a2 * t2 * t2;

        double t3 = max(t1, t2);

        double s = s1 + s2;
        double ss = t3 * v3;

        printf("Case %lld: %lf %lf\n", kase++, s, ss);
    }
    return 0;
}
