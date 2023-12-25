#include <stdio.h>

int main() {
    int sayi, toplam = 0;
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);
    while (sayi != 0) {
        toplam += sayi % 10;
        sayi /= 10;
    }
    printf("%d", toplam);
    return 0;
}

/*
 * Güney Yılmaz
 * 19.12.2023 16.42
 * Description: Klavyeden  alınan  bir  sayının  basamaklarını  toplayarak  ekrana yazdıran programı yazınız.
 */