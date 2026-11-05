#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int bakiye = 100;
    int bahis;

    printf("=== SLOT OYUNUNA HOS GELDINIZ! ===\n");

    // Bakiye 0'dan büyük olduğu sürece oyun dönecek
    while (bakiye > 0) {
        printf("\n---------------------------------\n");
        printf("Mevcut bakiyeniz: %d TL\n", bakiye);
        printf("Bahis miktari giriniz (Cikmak icin 0): ");
        scanf("%d", &bahis);

        // Oyundan çıkış kontrolü
        if (bahis == 0) {
            printf("Oyundan cikiliyor. Toplam bakiyeniz: %d TL. Gorusmek uzere!\n", bakiye);
            break; // Döngüyü kırar ve bitirir
        }

        // Cüzdandaki paradan fazla bahis yapılmasın
        if (bahis > bakiye) {
            printf("Cebinde o kadar para yok knk! Daha dusuk bir bahis gir.\n");
            continue; // Bu turu atlar, başa döner
        }

        // Bahisi bakiyeden düş
        bakiye -= bahis;

        // Slot sayılarını üret
        int sayi1 = (rand() % 5) + 1;
        int sayi2 = (rand() % 5) + 1;
        int sayi3 = (rand() % 5) + 1;

        printf("Slotlar: [ %d ] [ %d ] [ %d ]\n", sayi1, sayi2, sayi3);

        // Kazanma kontrolü
        if (sayi1 == sayi2 && sayi2 == sayi3) {
            printf("JACKPOT! Bahis * 5 kazandiniz!\n");
            bakiye += bahis * 5;
        } 
        else if (sayi1 == sayi2 || sayi2 == sayi3 || sayi1 == sayi3) {
            printf("Tebrikler! Bahis * 2 kazandiniz!\n");
            bakiye += bahis * 2;
        } 
        else {
            printf("Maalesef kaybettiniz.\n");
        }
    }

    if (bakiye <= 0) {
        printf("\nBanka iflas! Tum paran bitti, bilmez misin kumarda hep kasa kazanir.\n");
    }

    return 0;
}