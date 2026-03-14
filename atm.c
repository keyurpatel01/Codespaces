#include <stdio.h>
int deposite(int amount)
{
    int balance = 1000;
    return balance += amount;
}
int withdraw(int amount, int balance)
{
    return balance -= amount;
}
int main()
{
    int amount;
    printf("enter the amount to deposite: \n");
    scanf("%d", &amount);
    int balance = deposite(amount);
    printf("balance is %d", balance);
    printf("enter the amount to withdraw: \n");
    scanf("%d", &amount);
    printf("remaining balance is %d", withdraw(amount, balance));
    return 0;
}