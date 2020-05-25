#include <stdio.h>
int main(int argc, char const *argv[])
{
    int namta[20][10], even = 0, odd = 0, sum = 0;
    int row, col;
    for (row = 0; row < 20; row++)
    {
        for (col = 0; col < 10; col++)
        {
            namta[row][col] = (row + 1) * (col + 1);
        }
    }
    for (row = 0; row < 20; row++)
    {
        for (col = 0; col < 10; col++)
        {
            printf("%d X %d = %d\n", (row + 1), (col + 1), namta[row][col]);
        }
        printf("\n");
    }
    for (row = 0; row < 20; row++)
    {
        for (col = 0; col < 10; col++)
        {
            if (namta[row][col] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
    }
    printf("Odd Number = %d\nEven Number = %d\n", odd, even);
    sum = 0;
    for (row = 0; row < 20; row++)
    {
        for (col = 0; col < 10; col++)
        {
            sum = sum + namta[row][col];
        }
    }
    printf("Sum = %d\n", sum);

    return 0;
}
