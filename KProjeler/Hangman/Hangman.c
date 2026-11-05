    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    #include <string.h> // strlen için bu kütüphane şart!

    char *kelimeler[] = {
        "bilgisayar",
        "programlama",
        "algoritma",
        "yazilim",
        "donanim",
        "klavye",
        "kutuphane",
        "degisken",
        "fonksiyon",
        "terminal",
        "veritabani",
        "internet",
    };

    int can = 10;
    char girilen_harf;
    int zafer = 0;
    int bulundu = 0;

    int main(){
        srand(time(NULL));
        int kelime_sayisi = sizeof(kelimeler) / sizeof(kelimeler[0]);
        char *secilen_kelime = kelimeler[rand() % kelime_sayisi]; // Otomatik boyut
        int kelime_uzunlugu = strlen(secilen_kelime); // Uzunluğu bulur

        printf("Rastgele secilen kelime (Debug): %s\n", secilen_kelime); 
        printf("Kelimenin uzunlugu: %d\n\n", kelime_uzunlugu);
        
        char gorunum[50];
        for(int i = 0; i < kelime_uzunlugu; i++) {
            gorunum[i] = '_';
        }
        gorunum[kelime_uzunlugu] = '\0';
        for(int i = 0; i < kelime_uzunlugu; i++) {
            printf("%c ", gorunum[i]);
        }
        printf("\n\n");

        while (zafer == 0) {
            printf("Bir harf girin: ");
            scanf(" %c", &girilen_harf);
            
            bulundu = 0;

            // Girilen harfi kelimenin içinde arıyoruz
            for(int i = 0; i < kelime_uzunlugu; i++) {
                if(secilen_kelime[i] == girilen_harf) {
                    gorunum[i] = girilen_harf; // Eğer doğruysa görünüm dizisine harfi kaydet!
                    bulundu = 1;
                }
            }

            if (bulundu == 0) {
                printf("Harf kelimede bulunamadi!\n");
                can--;
                printf("Kalan can: %d\n", can);
                if (can == 0) {
                    printf("Oyun bitti! Kaybettin. Kelime: %s\n", secilen_kelime);
                    return 0;
                }
            } else {
                printf("Tebrikler, dogru tahmin!\n");
            }

            // Güncel kelime durumunu ekrana yazdırıyoruz
            printf("Kelime: ");
            for(int i = 0; i < kelime_uzunlugu; i++) {
                printf("%c ", gorunum[i]);
            }
            printf("\n");

            // ZAFER KONTROLÜ: Görünüm dizisinde hala '_' kalmış mı diye bakıyoruz
            int eksik_var_mi = 0;
            for(int i = 0; i < kelime_uzunlugu; i++) {
                if(gorunum[i] == '_') {
                    eksik_var_mi = 1;
                    break;
                }
            }

            // Eğer hiç '_' kalmadıysa oyun kazanılmıştır!
            if (eksik_var_mi == 0) {
                zafer = 1;
                printf("\nTebrikler! Butun kelimeyi bildin, KAZANDIN! \n");
                break;
            }

            printf("\n-------------------\n");
        }

        return 0;
    }