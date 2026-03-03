/*
loop:iterative,repeatitive
entry control: for,while
exit control:do while
*/
#include <stdio.h>
int main()
{
    for (int i = 0; i < 5; i++)
    {
        printf("Hello World\n");
    }
    for (int i = 0; i < 5; i++)
    {
        printf("\n%d\n", i);
    }
    return 0;
}