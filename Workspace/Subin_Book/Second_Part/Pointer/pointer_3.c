#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x = 10;
    int *p;
    printf("Value of x : %d\n", x);//10
    p = &x;
    *p = 20;
    printf("Value of x : %d\n", x);//20
    x = 15;
    printf("Value of x : %d\n", x);//15
    printf("location of %d is %p\n", *p, p);
    printf("Address of x : %p\n", &x);
    printf("Value of p : %p\n", p);
    return 0;
}
