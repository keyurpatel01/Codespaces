/*
Arithmetic Operator : used for calculation
+,-,*,/,%

12345 % 10 to get last number.
*/
#include <stdio.h>
int main()
{
    int num_1 = 10, num_2 = 20;
    printf("\nArithmetic Operator\n");
    printf("\n Num is %d", num_1 + num_2);
    printf("\n Num is %d", num_1 - num_2);
    printf("\n Num is %d", num_1 * num_2);
    printf("\n Num is %d", num_1 / num_2);
    printf("\n Num is %d", num_1 % num_2);

    /*
    Assignment Operator: =,+=,-=

    */
    int num1 = 5;
    num1 += 3;
    printf("\nAssignment Operator\n");

    printf("%d", num1);

    int num2 = 10;
    num2 -= 2;
    printf("%d", num2);

    /*
    Logical Operator : &&,||,!
    */

    int y = 10;
    printf("\nLogical Operator\n");
    printf("\n%d", y > 2 && y < 20);
    printf("\n%d", y > 2 || y < 10);
    printf("\n%d", !(y > 0));

    /*
    Relational Operator : <,>,<=,>=,==,!=
    */

    int l = 10, b = 20;
    printf("\nRelational Operator\n");
    printf("\n%d\n", l > b);
    printf("\n%d\n", l < b);
    printf("\n%d\n", l >= b);
    printf("\n%d\n", l <= b);
    printf("\n%d\n", l == b);
    printf("\n %d \n", l != b);

    /*
    Ternery Operator :
    */
    int marks = 49;
    char result = (marks >= 33) ? 'p' : 'f';
    printf("\nTernery Operator\n");
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