#include <stdio.h>
int main()
{
    /*
    1
    12
    123
    1234
    12345
    */
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" %d ", j);
        }
        printf("\n");
    }

    /*
     *
     * *
     * * *
     * * * *
     * * * * *
     */
    // for (int k = 1; k <= 5; k++)
    // {
    //     for (int l = 1; l <= k; l++)
    //     {
    //         printf(" * ", l);
    //     }
    //     printf("\n");
    // }

    return 0;
}