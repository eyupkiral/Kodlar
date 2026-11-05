#include <stdio.h>
int main() {
    printf("Enter the Horizontal length of the house: ");
    float horizontal_length;
    scanf("%f", &horizontal_length);
    printf("Enter the Vertical length of the house: ");
    float vertical_length;
    scanf("%f", &vertical_length);
    printf("Enter the vertical length of the roof: ");
    float roof_length;
    scanf("%f", &roof_length);
    printf("Enter the number of doors: ");
    int number_of_doors;
    scanf("%d", &number_of_doors);
    printf("Enter the horizontal length of the doors: ");
    float door_horizontal_length;
    scanf("%f", &door_horizontal_length);
    printf("Enter the vertical length of the doors: ");
    float door_vertical_length;
    scanf("%f", &door_vertical_length);
    printf("Enter the number of windows: ");
    int number_of_windows;
    scanf("%d", &number_of_windows);
    printf("Enter the horizontal length of the windows: ");
    float window_horizontal_length;
    scanf("%f", &window_horizontal_length);
    printf("Enter the vertical length of the windows: ");
    float window_vertical_length;
    scanf("%f", &window_vertical_length);

    float paintable_area = (horizontal_length * vertical_length) + (0.5 * horizontal_length * roof_length) - (number_of_doors * door_horizontal_length * door_vertical_length) - (number_of_windows * window_horizontal_length * window_vertical_length);
    if (paintable_area <= 0) {
        printf("Do you even have anything paintable?\n");
    }
    else {
    printf("The paintable area of the house is: %.2f\n", paintable_area);
    printf("The cost of painting the house is: %.2f\n", paintable_area * 25);
    }
    return 0;
}