#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int randomNum;
    int tahmin;
    int azami = 100;
    int sabit = 0;
    randomNum = rand() % azami + 1; // "azami" değeri 100 olduğundan 1 ila 100 arasından bir sayı seçicektir. "azami" değeri değiştirilebilir.
    printf("Bilgisayar rastgele bir sayi secti. Tahminleri alalim(1-%d):\n ", azami);
    scanf("%d" , &tahmin);
    while (sabit == 0){
        if (tahmin < 1 || tahmin > azami){
                printf("Lütfen Dogru Aralikta Bir Sayi Secin!\n ");
                scanf(" %d" , &tahmin);
            }
        while (tahmin < randomNum && tahmin > 0 && tahmin < azami + 1){ // tahmin sayısı randomNum sayısından küçükse ve doğru aralıktaysa kullanıcıya tahmininin küçük olduğunu söyleyip tekrar tahmin alır.
            printf("Tahmininiz Sayidan Kucuktur.\n ");
            scanf(" %d" , &tahmin);
        }
        while (tahmin > randomNum && tahmin > 0 && tahmin < azami + 1){ // tahmin sayısı randomNum sayısından büyükse ve doğru aralıktaysa kullanıcıya tahmininin büyük olduğunu söyleyip tekrar tahmin alır.
            printf("Tahmininiz Sayidan Buyuktur.\n ");
            scanf(" %d" , &tahmin);
            }
        if (tahmin == randomNum && tahmin > 0 && tahmin < azami + 1){ // tahmin sayısı randomNum sayısına eşitse ve doğru aralıktaysa kullanıcıya doğru tahmin yaptığını söyleyip "sabit" değişkenini 1 yapar ve döngüden çıkar.
            printf("Tebrikler! Dogru Sayiyi Buldunuz.\n");
            sabit = 1;
            tahmin = 0;
        }  
    }
    return 0;
}