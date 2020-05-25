#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x = 10;
    int *p;
    p = &x;
    printf("Value of x:%d\n", x);
    printf("address of x:%p\n", &x);
    *p = 20;
    printf("Value of x:%d\n", *p);
    printf("address of x:%p\n", p);
    printf("Value of x:%d\n", x);
    printf("address of x:%p\n", &x);

    return 0;
}
