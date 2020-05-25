#include <stdio.h>
int find_max(int ara[], int n);
int main(int argc, char const *argv[])
{
    int ara[] = {-13, 34, 5, 6, 76, 24, 45, -1344, 544, 6545, 663};
    int n = 11;
    int max = find_max(ara, n);
    printf("%d\n", max);
    return 0;
}
int find_max(int ara[], int n)
{
    int max = ara[0];
    int i;
    for (i = 1; i < n; i++)
    {

        if (ara[i] > max)
        {
            max = ara[i];
        }
    }
    return max;
}
