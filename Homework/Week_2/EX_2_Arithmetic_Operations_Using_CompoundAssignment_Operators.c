#include <stdio.h>
int main(void)
{
    int sayi1, sayi2, sum, diff, prod, remainder;
    double divide;
    printf("Enter two integers: ");
    scanf("%d %d", &sayi1, &sayi2);
    sum = sayi1;
    sum += sayi2;
    diff = sayi1;
    diff -= sayi2;
    prod = sayi1;
    prod *= sayi2;
    remainder = sayi1;
    remainder %= sayi2;
    divide = (double)sayi1;
    divide /= (double)sayi2;

    printf("Sum: %d\n", sum);
    printf("Diff: %d\n", diff);
    printf("Prod: %d\n", prod);
    printf("Divide: %.5f\n", divide);
    printf("Remainder: %d\n", remainder);
    return 0;

}