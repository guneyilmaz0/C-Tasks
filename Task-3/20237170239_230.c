#include <stdio.h>
#define length(a) (sizeof(a)/sizeof(*a))

int main() {
    int dizi[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int kucuk = dizi[0], buyuk = dizi[0];
    for (int i = 0; i < length(dizi); i++) {
        if (dizi[i] < kucuk)
            kucuk = dizi[i];
        if (dizi[i] > buyuk)
            buyuk = dizi[i];
    }

    printf("En kucuk deger : %d\n", kucuk);
    printf("En buyuk deger : %d", buyuk);
    return 0;
}

/*
 * Güney Yılmaz
 * 21.12.2023 13.34
 * Description: İçerisinde tamsayılar olan bir dizinin en büyük ve en küçük elemanını bulan ve ekrana yazdıran programı yazınız.
 */