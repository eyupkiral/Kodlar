#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    char oyuncuTahtasi[5][5];
    char botTahtasi[5][5];

    // Tahtaları başlangıçta dalga simgesi '~' ile dolduralım
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            oyuncuTahtasi[i][j] = '~';
            botTahtasi[i][j] = '~';
        }
    }

    printf("=== VISUAL BATTLESHIP (AMIRAL BATTI) ===\n");
    printf("Harita 5x5 boyutundadir (Satir ve Sutunlar 0 ile 4 arasi).\n\n");

    // 1. Oyuncu gemisini yerleştirir
    int ogemix, ogemiy;
    while (1) {
        printf("Gemini yerlestir (Satir Sutun gir, orn: 2 3): ");
        if (scanf("%d %d", &ogemix, &ogemiy) != 2) {
            printf("Lutfen sadece sayi girin!\n");
            while (getchar() != '\n'); // Tamponu temizle (sonsuz döngüyü önler)
            continue;
        }
        
        if (ogemix >= 0 && ogemix <= 4 && ogemiy >= 0 && ogemiy <= 4) {
            break;
        }
        printf("Gecersiz koordinat! 0 ile 4 arasinda deger gir.\n");
    }
    oyuncuTahtasi[ogemix][ogemiy] = 'S'; // 'S' = Ship (Gemi)

    // Bot rastgele gemisini yerleştirir
    int botgemix = rand() % 5;
    int botgemiy = rand() % 5;

    printf("\nBot gemisini gizli bir noktaya yerlesti. Savas basliyor!\n");

    int oyunDevamEdiyor = 1;

    while (oyunDevamEdiyor) {
        // --- EKRANA HARİTALARI BASALIM ---
        printf("\n--- BOTUN HAREKET ALANI (SALDIRI ALANIN) ---\n");
        printf("  0 1 2 3 4\n");
        for (int i = 0; i < 5; i++) {
            printf("%d ", i);
            for (int j = 0; j < 5; j++) {
                printf("%c ", botTahtasi[i][j]);
            }
            printf("\n");
        }

        printf("\n--- KENDI TAHTAN (BOTUN SALDIRDIĞI YER) ---\n");
        printf("  0 1 2 3 4\n");
        for (int i = 0; i < 5; i++) {
            printf("%d ", i);
            for (int j = 0; j < 5; j++) {
                printf("%c ", oyuncuTahtasi[i][j]);
            }
            printf("\n");
        }

        // --- OYUNCU HAMLESİ ---
        int guessx, guessy;
        printf("\nAtes etmek icin koordinat sec (Satir Sutun): ");
        if (scanf("%d %d", &guessx, &guessy) != 2) {
            printf("Hatali giris! Lutfen iki adet sayi girin.\n");
            while (getchar() != '\n'); // Hatalı harfi temizle
            continue;
        }

        if (guessx < 0 || guessx > 4 || guessy < 0 || guessy > 4) {
            printf("Harita disina tastin knk! 0-4 arasi gir.\n");
            continue;
        }

        // Botun gemisini vurup vurmadığını kontrol et
        if (guessx == botgemix && guessy == botgemiy) {
            botTahtasi[guessx][guessy] = 'X'; // Vuruldu!
            printf("\nTEBRIKLER! Botun gemisini vurdun ve oyunu kazandin! 🎉\n");
            break;
        } else {
            botTahtasi[guessx][guessy] = 'O'; // Iskaladı
            printf("\nIskaladin! Hedef boş.\n");
        }

        // --- BOTUN HAMLESİ ---
        int botguessx = rand() % 5;
        int botguessy = rand() % 5;
        
        printf("Bot (%d, %d) koordinatina ateş etti...\n", botguessx, botguessy);

        // Botun oyuncuyu vurup vurmadığı kontrolü
        if (botguessx == ogemix && botguessy == ogemiy) {
            oyuncuTahtasi[botguessx][botguessy] = 'X';
            printf("Eyvah! Bot senin gemini vurdu! 💥\n");
            printf("Oyun bitti! Kaybettin...\n");
            break;
        } else {
            if (oyuncuTahtasi[botguessx][botguessy] == '~') {
                oyuncuTahtasi[botguessx][botguessy] = 'O';
            }
            printf("Bot iskaladi, şanslisin!\n");
        }

        printf("\n-------------------\n");
    }

    system("pause");
    return 0;
}