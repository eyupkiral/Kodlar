#include <stdio.h>
int function;
int num1, num2;
int main() {
    printf("Select a function (1 or 2...):\n 1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division\n");
    scanf("%d", &function);
    switch (function) {
        case 1:
            printf("Addition Function. Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            printf("Result: %d\n", num1 + num2);
            break;
        case 2:
            printf("Subtraction Function. Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            printf("Result: %d\n", num1 - num2);
            break;
        case 3:
            printf("Multiplication Function. Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            printf("Result: %d\n", num1 * num2);
            break;
        case 4:
            printf("Division Function. Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            printf("Result: %.2f\n", (float)num1 / num2);
            break;
        default:
            printf("Invalid function selection.\n");
    }
}