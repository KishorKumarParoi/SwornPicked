#include <stdio.h>
int main(int argc, char const *argv[])
{
    long long int n, a, b, p = 0;
    scanf("%lld", &n);

    for (b = 1; b <= n; b++)
    {
        for (a = b; a <= n; a++)
        {
            if ((a * b) > n && (a / b) < n && (a % b) == 0)
            {
                p = 1;
                printf("%lld %lld\n", a, b);
                return 0;
            }
        }
    }
    if (p == 0)
    {
        printf("-1\n");
    }

    return 0;
}
