#include <stdio.h>
int main(int argc, char const *argv[])
{
    char s[100], ln, i;
    gets(s);
    ln=strlen(s);
    for (size_t i = 0; i < ln; i++)
    {

        if (s[i] != 'a' && s[i] != 'A' && s[i] != 'e' &&  s[i] != 'E' && s[i] != 'i' && s[i] != 'I' && s[i] != 'o' && s[i] != 'O' && s[i] != 'u' && s[i] != 'U'&& s[i] != 'y' && s[i] != 'Y' )
        {

            if (s[i] <= 'Z')
            
                s[i] += 32;
                printf(".%c", s[i]);
            
        }
    }
    printf("\n");

    return 0;
}