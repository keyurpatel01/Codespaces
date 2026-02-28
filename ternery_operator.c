#include <stdio.h>
int main()
{
    int marks = 49;
    char result = (marks >= 33) ? 'p' : 'f';
    printf("\nresult is %c\n", result);

    int no1 = 85, no2 = 410;
    // if (no1 > no2)
    // {
    //     printf("\nmax no is %d\n", no1);
    // }else{
    //     printf("\nmax no is %d\n", no2);

    // }
    int max = (no1 > no2) ? no1 : no2;
    printf("max no is %d", max);
    return 0;
}