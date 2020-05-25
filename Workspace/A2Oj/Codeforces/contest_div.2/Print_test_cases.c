#include <stdio.h>
int main()
{
    int i = 1, n;
    scanf("%d", &n);
    while (n != 0)
    {

        printf("Case %d: %d\n", i++, n);
        scanf("%d", &n);
    }

    return 0;
}
