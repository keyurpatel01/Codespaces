/*
File : to store permanently
file pointer
to open file
write into the file
file close
close
*/
#include <stdio.h>
int main()
{
    FILE *fp;
    // to open file and also write
    fp = fopen("dummy.txt", "w"); // to avoid override use "a"
    // to write into the file
    fprintf(fp, "Hello tops");
    fclose(fp);
}