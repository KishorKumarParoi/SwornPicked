#include<bits/stdc++.h>
#define ll long long int
ll fib(ll n)
{
    ll a = 1, b = 1, c, i;
    if( n < 2)
        return 1;
    for (i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main ()
{
    ll n;
    scanf("%d",&n);
    printf("%d\n", fib(n));
    return 0;
}

