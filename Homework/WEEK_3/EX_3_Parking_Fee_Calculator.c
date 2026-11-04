#include <stdio.h>
int main() {
    float parking_fee;
    int parking_hours;
    printf("Enter the number of hours you parked: ");
    scanf("%d", &parking_hours);
    if (parking_hours > 0) {
        parking_fee = parking_hours <= 2 ? 40 : 
        (parking_hours <= 5 ? 40 + 20 * (parking_hours - 2) : 
        (100 + 30 * (parking_hours - 5)));
        printf("Your parking fee is: %.2f\n", parking_fee);
    } else {
        printf("Invalid input. Please enter a positive number of hours.\n");
    }
    return 0;
}