#include <stdio.h>

int main() {
    int sayi, t = 0;
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);
    for (int i = 1; i <= sayi; i++) {
        if (sayi % i == 0) {
            t++;
        }
    }
    if (t == 2) {
        printf("%d bir asal sayidir.", sayi);
    } else {
        printf("%d bir asal sayi degildir.", sayi);
    }
    return 0;
}

/*
 * Güney Yılmaz
 * 19.12.2023 16.58
 * Description: Klavyeden alınan bir sayının asal sayı olup olmadığını kontrol eden ve bunu ekrana yazdıran programı yazınız.
 */