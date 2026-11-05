#include <stdio.h>
int main(void)
{
    int sayi1, sayi2, sayi3, sayi4, sayi5, sayi6;
    printf("Enter the first time (hours minutes seconds)[You do NOT need to write the earlier time first]: ");
    scanf("%d %d %d", &sayi1, &sayi2, &sayi3);
    printf("Enter the second time (hours minutes seconds): ");
    scanf("%d %d %d", &sayi4, &sayi5, &sayi6);
    int difference = (sayi4 * 3600 + sayi5 * 60 + sayi6) - (sayi1 * 3600 + sayi2 * 60 + sayi3);
    if (difference < 0) {
        difference = -difference;
    }
    printf("Time difference: %d hours %d minutes %d seconds\n", difference / 3600, (difference % 3600) / 60, difference % 60);
    return 0;
}