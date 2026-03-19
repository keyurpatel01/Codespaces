#include <stdio.h>
int main()
{
    FILE *fp;
    char ch;
    // to open file and also write
    fp = fopen("dummy.txt", "r"); // "r" is use for read
    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fp);
}