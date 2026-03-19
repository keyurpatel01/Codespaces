#include <stdio.h>
int main()
{
    /*
    Pointer is a variable that stores the address of some other variable.
    */
    int a = 10;
    int *p = &a;
    printf("\na is %d", a);
    printf("\naddress is %p", &a);
    printf("\npointer p is %p", p);
    printf("\nvalue stored in address of pointer is %d", *p);
    return 0;
}