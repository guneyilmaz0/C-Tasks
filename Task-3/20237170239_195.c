#include <stdio.h>

int main() {
    int sayi;
    printf("Tersten yazdirilacak sayiyi giriniz: ");
    scanf("%d", &sayi);
    while (sayi != 0) {
        printf("%d", sayi % 10);
        sayi /= 10;
    }
    return 0;
}

/*
 * Güney Yılmaz
 * 20.12.2023 00.14
 * Description: Klavyeden girilen bir sayının tersten okunuşunu ekrana yazdıran programı yazınız.
 */