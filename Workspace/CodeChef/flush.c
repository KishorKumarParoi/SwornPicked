#include <stdio.h>
int main(int argc, char const *argv[])
{
    int t, r, n;
    scanf("%d %d", &t, &r);
    while (t--)
    {
        scanf("%d", &n);
        if (n >= r)
            printf("Good boi\n");
        else
            printf("Bad boi\n");
    }
    return 0;
}
