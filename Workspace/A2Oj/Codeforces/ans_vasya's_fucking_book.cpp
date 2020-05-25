#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, t, n, x, y, d, a, b;
    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        cin >> n >> x >> y >> d;
        int flag = 0, count = 0;
        if (x == y)
        {
            cout << "0\n";
        }
        else if (n < x || n < y)
        {
            cout << "-1\n";
        }
        else if (y == 1)
        {
            if ((x - 1) % d == 0)
            {
                cout << (x - 1) / d << endl;
            }
            else
            {
                cout << ((x - 1) / d) + 1 << endl;
            }
        }
        else if (y == n)
        {
            if ((y - x) % d == 0)
            {
                cout << (y - x) / d << endl;
            }
            else
            {
                cout << ((y - x) / d) + 1 << endl;
            }
        }
        else if ((y - x) % d == 0)
        {
            cout << abs((y - x) / d) << endl;
        }
        else
        {
            if ((n - y) % d == 0)
            {
                a = ((n - y) / d) + ceil((n - x) / (d * 1.00));
                count = 1;
            }
            if ((y - 1) % d == 0)
            {
                b = ((y - 1) / d) + ceil(x / (d * 1.00));
                flag = 1;
            }
            if (flag == 1 && count == 1)
            {
                if (a < b)
                {
                    cout << a << endl;
                }
                else
                {
                    cout << b << endl;
                }
            }
            else if (flag == 1)
            {
                cout << b << endl;
            }
            else if (count == 1)
            {
                cout << a << endl;
            }
            else
            {
                cout << "-1\n";
            }
        }
    }
    return 0;
}