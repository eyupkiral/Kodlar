#include <stdio.h>
int main(){
    int Balance = 1500;
    printf("Initian Balance: %d TL\n", Balance); //Balance değeri Yukarıdıan İstenildiği Şekilde değiştirilebilir.
    printf("Enter Withdrawel amount: ");
    int withdrawel;
    scanf("%d", &withdrawel);
    if (withdrawel > Balance){
        printf("Insufficient Balance!\n");
    }
    else if (withdrawel <= 0){
        printf("Invalid Withdrawel Amount!\n");
    }
    else{
        Balance -= withdrawel;
        printf("Withdrawel Successful! New Balance: %d TL\n", Balance);
    }
}