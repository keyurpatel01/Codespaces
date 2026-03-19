#include <stdio.h>
/*
fibonacci series : 1 1 2 3 5 8 13
sum of last 2 no
replace 1st variable with 2nd
replace 2nd variable with ans
dislplay value
a = 1
b = 1
c = a + b
a=b
b=c

*/
int main()
{
    int a = 1, b = 1, c;
    printf(" %d  %d ", a, b);
    int i = 1;
    while (i <= 5)
    {
        c = a + b;
        a = b;
        b = c;
        printf(" %d ", c);
        i++;
    }
    return 0;
}