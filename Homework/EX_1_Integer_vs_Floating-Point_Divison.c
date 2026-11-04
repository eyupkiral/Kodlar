#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int sayi1, sayi2, tamli;
    float ondalikli;

    printf("Enter Two Integers: ");
    scanf("%d", &sayi1);
    scanf("%d", &sayi2);
    tamli = sayi1 / sayi2;
    ondalikli = (float)sayi1 / (float)sayi2;
    printf("Integer division result: %d\n", tamli);
    printf("Floating-point division result: %.3f\n", ondalikli);
    system("pause");


    return 0;
}