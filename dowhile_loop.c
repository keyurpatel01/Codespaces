#include <stdio.h>
int main()
{
    int i = 5;
    do
    {
        printf("\n%d\n", i);
        i++;
    } while (i <= 5);
    int p = 5;
    do
    {
        printf("\nP:%d\n", p);
        p--;
    } while (p >= 1);

    return 0;
}