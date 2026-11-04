#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <windows.h> // Sleep() fonksiyonu için gerekli (Windows'a özel)
#include "matislem.h"

int main() {
    int gsayi1, gsayi2;
    int kare; 
    float bolum;
    char girdi[50];
    char islem;
    char devam = 'e';

    while (devam == 'e' || devam == 'E') {
        printf("\n----------------------------------------\n");
        printf("Hangi islemi yapmak istiyorsunuz?\n");
        printf("(K)are Al, (B)olme, (C)arpma, (T)oplama, (F)ark Al, (U)ssal\n");
        printf("Cikis icin: (E)xit, (E P)ause, (E 10) Geriye Sayarak Cikis: ");
        
        fgets(girdi, sizeof(girdi), stdin);
        girdi[strcspn(girdi, "\n")] = 0;

        islem = girdi[0];

        if (islem == '\0') continue;

        // --- ÇIKIŞ İŞLEMLERİ (E veya e) ---
        if (islem == 'E' || islem == 'e') {
            printf("Programdan cikiliyor...\n");

            char parametre[20] = "";
            sscanf(girdi, "%*c %s", parametre);

            if (strlen(parametre) > 0) {
                if (tolower(parametre[0]) == 'p') {
                    printf("Sonsuz bekleme modu (Pause). Kapatmak icin bir tusa basin...\n");
                    system("pause");
                } 
                else {
                    int saniye = atoi(parametre);
                    if (saniye > 0) {
                        // CANLI GERİYE SAYIM KISMI BURASI 🚀
                        for (int i = saniye; i > 0; i--) {
                            printf("\rKapanmaya son: %2d saniye... ", i);
                            fflush(stdout); // Yazının ekranda anında görünmesini sağlar
                            Sleep(1000);    // 1000 milisaniye = 1 saniye bekletir
                        }
                        printf("\rKapanis yapiliyor. Eyvallah!      \n");
                        Sleep(500); // Kapanmadan önce yarım saniye minik bir duraklama
                    } else {
                        // Sayı geçersizse varsayılan 2 saniye geriye sayım
                        for (int i = 2; i > 0; i--) {
                            printf("\rKapanmaya son: %2d saniye... ", i);
                            fflush(stdout);
                            Sleep(1000);
                        }
                    }
                }
            } 
            else {
                // Sadece "e" yazıldıysa varsayılan 2 saniye geriye sayım
                for (int i = 2; i > 0; i--) {
                    printf("\rKapanmaya son: %2d saniye... ", i);
                    fflush(stdout);
                    Sleep(1000);
                }
            }

            break; // Döngüyü bitir ve programı kapat
        }

        // --- DİĞER MATEMATİKSEL İŞLEMLER (Aynı kalıyor) ---
        if (islem == 'K' || islem == 'k') {
            printf("Bir sayi girin: ");
            scanf("%d", &gsayi1);
            kare = kareal(gsayi1);
            printf("Girdiginiz sayinin karesi: %d\n", kare);
            getchar(); 
        }
        else if (islem == 'B' || islem == 'b') {
            printf("Bolunen sayiyi girin: ");
            scanf("%d", &gsayi1);
            printf("Bolen sayiyi girin: ");
            scanf("%d", &gsayi2);
            if (gsayi2 == 0) {
                printf("Hata: Sifira bolme hatasi!\n");
                getchar();
                continue;
            }
            bolum = bolme(gsayi1, gsayi2);
            printf("Girdiginiz sayilarin bolumu: %.2f\n", bolum);
            printf("Girdiginiz sayilarin kalani: %d\n", gsayi1 % gsayi2);
            getchar();
        } 
        else if (islem == 'C' || islem == 'c') {
            printf("Carpilan sayiyi girin: ");
            scanf("%d", &gsayi1);
            printf("Carpan sayiyi girin: ");
            scanf("%d", &gsayi2);
            int carpim = carpma(gsayi1, gsayi2);
            printf("Girdiginiz sayilarin carpimi: %d\n", carpim);
            getchar();
        } 
        else if (islem == 'T' || islem == 't') {
            printf("Toplanan sayiyi girin: ");
            scanf("%d", &gsayi1);
            printf("Toplayan sayiyi girin: ");
            scanf("%d", &gsayi2);
            int toplam = toplama(gsayi1, gsayi2);
            printf("Girdiginiz sayilarin toplami: %d\n", toplam);
            getchar();
        } 
        else if (islem == 'F' || islem == 'f') {
            printf("Cikartilan sayiyi girin: ");
            scanf("%d", &gsayi1);
            printf("Cikaran sayiyi girin: ");
            scanf("%d", &gsayi2);
            int fark = farkal(gsayi1, gsayi2);
            printf("Girdiginiz sayilarin farki: %d\n", fark);
            getchar();
        } 
        else if (islem == 'U' || islem == 'u') {
            printf("Taban sayiyi girin: ");
            scanf("%d", &gsayi1);
            printf("Us sayiyi girin: ");
            scanf("%d", &gsayi2);
            int ussonuc = ussal(gsayi1, gsayi2);
            printf("Girdiginiz sayilarin ussu: %d\n", ussonuc);
            getchar();
        }
        else {
            printf("Gecersiz bir islem sectiniz!\n");
        }
    }

    return 0;
}