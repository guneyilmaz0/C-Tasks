#include <stdio.h>
#define length(a) (sizeof(a)/sizeof(*a))

int main() {
    int s[] = {22, 36, 12, 44, 56, 96, 34, 23, 47, 85, 76, 13, 19, 45, 48, 53};
    int cift = 0, tek = 0, asal = 0;
    for (int i = 0; i < length(s); i++) {
        int sayi = s[i];
        if (sayi % 2 == 0)
            cift++;
        int bolen = 0;
        for (int j = 1; j <= sayi; j++) {
            if (sayi % j == 0)
                bolen++;
        }
        if (bolen == 2)
            asal++;
    }
    tek = length(s) - cift;
    printf("Toplam Cift Sayi: %d\n", cift);
    printf("Toplam Tek Sayi: %d\n", tek);
    printf("Toplam Asal Sayi: %d\n", asal);
    return 0;
}

/*
 * Güney Yılmaz
 * 21.12.2023 13.46
 * Description: Bir dizi içerisindeki sayılardan kaç tanesinin çift, tek  ve  asal sayı olduğunu bularak ekrana yazdıran programı yazınız.
 */