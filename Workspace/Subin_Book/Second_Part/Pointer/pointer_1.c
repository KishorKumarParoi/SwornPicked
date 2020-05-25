#include <stdio.h>
int main(int argc, char const *argv[])
{
    double pi = 3.14156;
    double *ptr;
    ptr = &pi;
    printf("Value of pi:%lf\n", pi);
    printf("address of pi:%p\n", &pi);
    printf("Value of pi:%lf\n", *ptr);
    printf("address of pi:%p\n", ptr);
    return 0;
}
