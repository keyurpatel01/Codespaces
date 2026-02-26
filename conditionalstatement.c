/*
if: if conditions is true : true statement print else nothing
if else : if coundition is true : true statement else false statement print
*/
#include <stdio.h>
int main()
{
    int age = 12;
    if (age >= 18)
    {
        printf("/nYou can vote!!/n");
    }
    int num1 = 12;
    if (num1 > 0)
    {
        printf("\nNo is Positive\n");
    }

    /*
    if else : if condition is true then true statement print else false statement print
    */
    int no1 = 13;
    if (no1 % 2 == 0)
    {
        printf("\n  is even no\n");
    }
    else
    {
        printf("\nis odd no\n");
    }

    int marks = 49;
    if (marks >= 33)
    {
        printf("\n Pass \n");
    }
    else
    {
        printf("\nFail\n");
    }
}