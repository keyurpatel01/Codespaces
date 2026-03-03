#include <stdio.h>
int main()
{
    int a = 5;
    int b = a++;
    printf("\npost incree a:%d\n", a);
    printf("\npost incree b:%d\n", b);

    int x = 10;
    x++;
    printf("\nx=%d\n", x);

    int p = 5;
    int q = ++p;
    printf("\npre incree p:%d\n", p);
    printf("\npre incree q:%d\n", q);
    return 0;
}