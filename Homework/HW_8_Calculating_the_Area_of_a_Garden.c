#include <stdio.h>
int main() {
    printf("Enter the Longer Side of the rectangle part of garden: ");
    float longer_side;
    scanf("%f", &longer_side);
    printf("Enter the Shorter Side of the rectangle part of garden: ");
    float shorter_side;
    scanf("%f", &shorter_side);
    float radius = shorter_side / 2;
    printf("Enter the number of ponds of the garden: ");
    int number_of_ponds;
    scanf("%d", &number_of_ponds);
    printf("Enter the Radius of each pond: ");
    float pond_radius;
    scanf("%f", &pond_radius);
    const double pi = 3.141592653589793;
    float area = (longer_side * shorter_side) + (pi * radius * radius) / 2 - (number_of_ponds * pi * pond_radius * pond_radius);
    printf("The area of the garden is: %.2f\n", area);
    printf("The cost of the garden is: %.2f\n", area * 85);
    return 0;
}