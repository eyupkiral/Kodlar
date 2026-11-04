#include <stdio.h>
int CM;
int main(){
    printf("Enter length in centimeters: ");
    scanf("%d", &CM);
    int M = CM / 100;
    printf("Length in meters: %d\n", M);
    printf("Remaining centimeters: %d\n", CM % 100);
    return 0;
}