#include <stdio.h>
int main(int argc, char const *argv[])
{
    FILE *fp;
    char filename[] = "my_file.txt";
    fp = fopen(filename, "r");
    fprintf(fp, "This is a file created by my program! ");
    fprintf(fp, "I am so Happy.");
    fclose(fp);
    fp=fopen(filename, "r");
    fprintf(fp, "Second line");
     return 0;
}
