#include <stdio.h>

int main() {
    int binary_num;
    int sum_number = 0;      
    int base_mult = 1;     
    int remainder;

    printf("Enter a binary number: ");
    scanf("%d", &binary_num);

    while (binary_num >= 1) {
        
        remainder = binary_num % 10;

        if (remainder == 1) {
            sum_number += base_mult; 
        }

        binary_num /= 10;

        base_mult *= 2;
    }

    printf("Decimal equivalent: %d\n", sum_number);

    return 0;
}