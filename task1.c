// print all even numbers from 1 to 10 but skip odd numbers (using continue).
#include <stdio.h>
int main()
{
    int i = 10;
    for (int i = 0; i <= 10; i++)
    {
        if (i % 2 != 0)
        {
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}