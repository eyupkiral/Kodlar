#include <stdio.h>
#include <ctype.h>
char secim;
int odeme;
int main(){
    printf("============ SMART VENDING MACHINE ============\n");
    printf("A...WATER....15TL\n");
    printf("B...JUICE.....25TL\n");
    printf("C...Sandwich...50TL\n");
    printf("D....COFFEE....30TL\n");
    printf("Please select your product(A-D): ");
    scanf(" %c", &secim);

    secim = toupper(secim);
    if (secim == 'A' || secim == 'B' || secim == 'C' || secim == 'D'){
        printf("Please enter your payment amount: ");
        scanf("%d", &odeme);
        if (secim == 'A' && odeme >= 15){
            printf("Your Choice is: WATER\n");
            printf("Your change is: %d TL\n", odeme - 15);
        }
        else if (secim == 'B' && odeme >= 25){
            printf("Your Choice is: JUICE\n");
            printf("Your change is: %d TL\n", odeme - 25);
        }
        else if (secim == 'C' && odeme >= 50){
            printf("Your Choice is: Sandwich\n");
            printf("Your change is: %d TL\n", odeme - 50);
        }
        else if (secim == 'D' && odeme >= 30){
            printf("Your Choice is: COFFEE\n");
            printf("Your change is: %d TL\n", odeme - 30);
        }
        else{
            printf("Insufficient payment! Transaction canceled.\n");
            return 0;
        }
    }
    else{
        printf("Invalid selection! Please select a valid product (A-D).\n");
        return 0;
    }
    printf("Selected product: %c\n", secim);
}