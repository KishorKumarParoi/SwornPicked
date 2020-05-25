#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, t, arr[1001], sum, count = 0, cnt[1001], flag = 0;
    scanf("%d", &t);
    while (t--)
    {
        int count = 0;
        for (i = 0; i < 3; i++)
        {
            scanf("%d", &arr[i]);
            if (arr[i] == 1)
                cnt[i] = count++;
        }
        if (count >= 2)
            flag++;
    }
    printf("%d\n", flag);
    return 0;
}
