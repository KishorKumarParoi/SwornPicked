#include <stdio.h>
double add(double x, double y);
int main(int argc, char const *argv[])
{
    double a = 2.5, b = 2.87, c;
    //scanf("%d%d", &a, &b);
    c = add(a, b);
    printf("%lf\n", c);
    return 0;
}
double add(double n1, double n2)
{
    double sum = n1 + n2;
    return sum;
}
