
#include <stdio.h>
int main()
{
    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            break;
            printf("\n%d\n", i);
        }
    }

    int j = 0;
    while (j <= 5)
    {
        j++;
        if (j == 3)
        {
            continue;
            printf("\n%d\n", j);
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            continue;
            printf("%d", i);
        }
    }

    return 0;
}