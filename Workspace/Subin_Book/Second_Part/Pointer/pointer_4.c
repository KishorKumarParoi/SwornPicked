#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x = 10;
    int y;
    int *p;
    printf("Value of x : %d\n", x);//10
    p = &x;
    y = *p;
    *p = 15;
    printf("Value Of x : %d\n", x);//15
    printf("Value Of y : %d\n", y);//10
    printf("Value Of *p : %d\n", *p);//15
    printf("Address Of x : %p\n", &x);
    printf("Address Of y : %d\n", &y);
    printf("Value Of p : %p\n", p);

    return 0;
}
