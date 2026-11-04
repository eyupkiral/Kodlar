#include <stdio.h>

int main() {
    float shipping_fee;
    printf("Enter the total amount of your order: ");
    scanf("%f", &shipping_fee);
    (shipping_fee < 500) ? shipping_fee += 49.90 : shipping_fee;
    printf("Your total is: %.2f\n", shipping_fee);
    return 0;
}.