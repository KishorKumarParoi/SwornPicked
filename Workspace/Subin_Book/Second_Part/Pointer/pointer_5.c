#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x = 100;
    int *p = NULL;
    printf("Value of x:%d\n", x);
    p=&x;
    printf("Value of *p:%d\n", *p);
    return 0;
}
