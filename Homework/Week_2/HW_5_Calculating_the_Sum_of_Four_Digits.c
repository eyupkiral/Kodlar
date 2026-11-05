#include <stdio.h>
int main(void) {
    int amount;
    printf("Enter a 4 digit number: ");
    scanf("%d", &amount);
    int digit1 = amount / 1000;
    int digit2 = (amount / 100) % 10;
    int digit3 = (amount / 10) % 10;
    int digit4 = amount % 10;
    int sum = digit1 + digit2 + digit3 + digit4;
    printf("Sum of the digits: %d\n", sum);
    return 0;
}