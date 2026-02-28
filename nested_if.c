#include <stdio.h>
int main()
{
    int pass = 12345;
    int otp = 43023;
    if (pass == 12345)
    {
        if (otp == 43023)
        {
            printf("\nLogin success!!!\n");
        }
        else
        {
            printf("\nInvalid OTP\n");
        }
    }
    else
    {
        printf("\nwrong password!!\n");
    }

    // max of 3 numbers
    int a = 120, b = 30, c = 44;
    if (a > b)
    {
        if (a > c)
        {
            printf("\n a is max");
        }
        else
        {
            printf("\n c is max\n");
        }
    }
    else
    {
        if (b > c)
        {
            printf("\n B is max");
        }
        else
        {
            printf("\n C is max\n");
        }
    }
    return 0;
}