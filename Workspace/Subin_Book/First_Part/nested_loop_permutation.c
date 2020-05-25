#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, j, k;
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            if (j != i)
            {
                for (k = 1; k <= 3 ; k++)
                {
                    if(k != j && k != i)
                    printf("%d %d %d\n", i, j, k);
                }
            }
        }
    }
    return 0;
}
