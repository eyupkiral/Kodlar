#include <stdio.h>
int main(void) {
    int amount;
    printf("Enter the amount to withdraw(TRY): ");
    scanf("%d", &amount);
    printf("Number of 200 TL notes: %d\n", amount / 200);
    amount %= 200;
    printf("Number of 100 TL notes: %d\n", amount / 100);
    amount %= 100;
    printf("Number of 50 TL notes: %d\n", amount / 50);
    amount %= 50;
    printf("Number of 20 TL notes: %d\n", amount / 20);
    amount %= 20;
    printf("Number of 10 TL notes: %d\n", amount / 10);
    amount %= 10;
    printf("Number of 5 TL notes: %d\n", amount / 5);
    amount %= 5;
    printf("Number of 1 TL notes: %d\n", amount / 1);

    return 0;
}