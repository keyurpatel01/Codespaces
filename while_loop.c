#include <stdio.h>
int main()
{
    int i = 1;
    while (i <= 5)
    {
        printf("\n%d\n", i);
        i++;
    }
    int j = 2;
    while (j <= 10)
    {
        printf("\nj:%d\n", j);
        j += 2;
    }
    return 0;
}