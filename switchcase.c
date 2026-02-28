#include <stdio.h>
int main()
{
    //Example = 1
    int choice = 2;
    switch (choice)
    {
    case 1:
        printf("\nSun\n");
        break;
    case 2:
        printf("\nMon\n");
        break;
    case 3:
        printf("\nTue\n");
        break;
    case 4:
        printf("\nWen\n");
        break;
    case 5:
        printf("\nThu\n");
        break;
    default:
        printf("Invalid Input");
    }

    //Example = 2

    int a = 10, b = 2;
    char op = '+';
    switch (op)
    {
    case '+':
        printf("sum is %d", a + b);
        break;
    case '-':
        printf("sum is %d", a - b);
        break;
    case '*':
        printf("sum is %d", a * b);
        break;

    default:
        printf("Invalid Input");
    }
    return 0;
}