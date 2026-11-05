#include "matislem.h"

int kareal(int sayi)
{
    return sayi * sayi;
}

float bolme(int sayi1, int sayi2)
{
    return (float)sayi1 / (float)sayi2;
}

int kalan(int sayi1, int sayi2)
{
    return sayi1 % sayi2;
}

int carpma(int sayi1, int sayi2)
{
    return sayi1 * sayi2;
}

int toplama(int sayi1, int sayi2)
{
    return sayi1 + sayi2;
}

int farkal(int sayi1, int sayi2)
{
    return sayi1 - sayi2;
}

int ussal(int sayi1, int sayi2)
{
    int sonuc = 1;
    for (int i = 0; i < sayi2; i++)
    {
        sonuc *= sayi1;
    }
    return sonuc;
}