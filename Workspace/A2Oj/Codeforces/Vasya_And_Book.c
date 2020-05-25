#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
int main(int argc, char const *argv[])
{
    int n, x, y, d, t, a, b, i;
    scanf("d", &t);
    while (t--)
    {
        scanf("%d %d %d %d", &n, &x, &y, &d);
        int flag = 0, count = 0;
        if (x == y)
        {
            printf("0\n");
        }
        else if (n < x || n < y)
        {
            printf("-1\n");
        }
        else if (y == 1)
        {
            if ((x - 1) % d == 0)
            {
                printf("%d\n", ((x - 1) / d));
            }
            else
            {
                printf("%d\n", ((x - 1) / d) + 1);
            }
        }
        else if (y == n)
        {
            if ((y - x) % d == 0)
            {
                printf("%d\n", (y - x) / d);
            }
            else
            {
                printf("%d\n", ((y - x) / d) + 1);
            }
        }
        else if ((y - x) % d == 0)
        {
            int fuck = abs(y - x) / d;
            printf("%d\n", fuck);
        }
        else
        {
            if ((n - y) % d == 0)
            {
                a = ((n - y) / d) + ceil(n - x) / (d * 1.00);
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
                    printf("%d\n", a);
                }
                else
                {
                    printf("%d\n", b);
                }
            }
            else if (flag == 1)
            {
                printf("%d\n", b);
            }
            else if (count == 1)
            {
                printf("%d\n", a);
            }
            else
            {
                printf("-1\n");
            }
        }
    }
    return 0;
}
