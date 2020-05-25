#include <stdio.h>
int main(int argc, char const *argv[])
{
    char s[] = "Bangladesh";
    char *p;
    p = s;
    printf("Name of My Country: %s\n", s);
    printf("Address of s: %p\n", s);
    return 0;
}
