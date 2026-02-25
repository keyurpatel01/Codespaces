/*
Variable : it is container to store the value, var can be changed
const : value cannot be changed
*/
#include<stdio.h>
int main(){
    int salary = 2000;
    salary = 3000000;
    const double pi = 3.14;
    printf("Salary is %d",salary);
    int age =12;
    age = 20;
    // pi = 2;
    // year = 2025;
    printf("\n age is %d",age);
    printf("\n AOC is %f",(pi*5*5));
    return 0;
}