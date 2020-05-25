#include <stdio.h>
int main(int argc, char const *argv[])
{
    char saarc[7][100]={"Bangladesh","India","Maldip","RTland","Srilanka","RUETLaNd","rasshaiYork"};
    int row,col,name_length;
    for (size_t row = 0; row < 7; row++)
    {
        name_length=strlen(saarc[row]);
        for (size_t col = 0; col < name_length; col++)
        {
            printf("(%d,%d) = %c ",row,col,saarc[row][col]);
        }
        printf("\n");
        
    }
    return 0;
}

