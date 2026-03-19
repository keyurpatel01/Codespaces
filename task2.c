#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a = 10, b = 20;
    printf("\n Before swapping a=%d and b=%d\n", a, b);
    swap(&a, &b);
    printf("\n After swapping a=%d and b=%d\n", a, b);
    return 0;
}