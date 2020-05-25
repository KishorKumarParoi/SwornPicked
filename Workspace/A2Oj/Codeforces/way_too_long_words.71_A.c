#include <stdio.h>
int main(int argc, char const *argv[])
{
    int t, l;
    char a[101];
    scanf("%d", &t);
    while (t--)
    {
        scanf("%s", a);
        l = strlen(a);
        if (l <= 10)
        {
            printf("%s\n", a);
        }
        else
        {
            printf("%c%d%c\n", a[0], l - 2, a[l - 1]);
        }
    }
    return 0;
}
