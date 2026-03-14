#include <stdio.h>

int calculate_total(int m1, int m2, int m3, int m4)
{
    return m1 + m2 + m3 + m4;
}
float average(int total)
{
    return total / 4;
}
int main()
{
    int m1 = 78, m2 = 45, m3 = 56, m4 = 79;
    int total = calculate_total(m1, m2, m3, m4);
    printf("\nTotla is %d\n", total);
    float avg = average(total);
    printf("\nAverage is %f\n", avg);
    return 0;
}
