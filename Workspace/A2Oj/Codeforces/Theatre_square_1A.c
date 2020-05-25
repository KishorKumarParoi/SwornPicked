#include <stdio.h>
int main(int argc, char const *argv[])
{
    long long int n, m, a;
    long long int x = 0, y = 0;
    scanf("%lld %lld %lld", &n, &m, &a);
    if (n % a == 0)
        x = (n / a);
    else
        x = (n / a) + 1;
    if (m % a == 0)
        y = (m / a);
    else
        y = (m / a) + 1;

    printf("%lld\n", x * y);
    return 0;
}
