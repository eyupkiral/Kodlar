#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int randomNum;
    int tahmin;
    int sabit = 0;
    randomNum = rand() % 100 + 1;
    printf("Bilgisayar rastgele bir sayi secti. Tahminleri alalim(1-100):\n ");
    scanf("%d" , &tahmin);
    while (sabit == 0){
        if (tahmin < 1 || tahmin > 100){
                printf("Lütfen Dogru Aralikta Bir Sayi Secin!\n ");
                scanf(" %d" , &tahmin);
            }
        while (tahmin < randomNum && tahmin > 0 && tahmin < 101){
            printf("Tahmininiz Sayidan Kucuktur.\n ");
            scanf(" %d" , &tahmin);
        }
        while (tahmin > randomNum && tahmin > 0 && tahmin < 101){
            printf("Tahmininiz Sayidan Buyuktur.\n ");
            scanf(" %d" , &tahmin);
            }
        if (tahmin == randomNum && tahmin > 0 && tahmin < 101){
            printf("Tebrikler! Dogru Sayiyi Buldunuz.\n");
            sabit = 1;
            tahmin = 0;
        }  
    }
}