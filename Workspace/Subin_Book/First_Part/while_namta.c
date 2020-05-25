#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, n, m;

    m = 0;
    i = 1;
    for (n = 1; n <= 9; n++)
    {
        while (i <= 10)
        {
            m = m + n;
            printf("%d X %d = %d\n", n, i, m);

            i++;
        }
    }

    return 0;
}
