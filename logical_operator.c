/*
Logical Operator : &&,||,!
*/
#include<stdio.h>
int main(){
    int a = 10;
    printf("\n%d",a>2 && a<20);
    printf("\n%d",a>2 || a<10);
    printf("\n%d",!(a>0));
    return 0;
}