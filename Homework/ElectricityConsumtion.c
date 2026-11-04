#include <stdio.h>
float consumption;
int main() {
    printf("enter consumption(kWh): ");
    scanf("%f", &consumption);
    if (consumption < 0) {
        printf("Invalid consumption value!\n");
    } else if (consumption <= 100) {
        printf("price: %.2f TL\n", consumption * 2);
    } else if (consumption <= 200) {
        printf("price: %.2f TL\n", (consumption - 100) * 3 + 100 * 2);
    } else if (consumption > 200) {
        printf("price: %.2f TL\n", (consumption - 200) * 4 + 100 * 3 + 100 * 2);
    }
return 0;
}