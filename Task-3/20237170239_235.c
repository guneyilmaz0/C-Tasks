#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Eleman sayisi (n) giriniz: ");
    scanf("%d", &n);
    int sayilar[n];
    for (int i = 0; i < n; ++i) {
        sayilar[i] = rand() % 99 + 1;
    }
    for (int i = 0; i < n; ++i) {
        printf("\t%d", sayilar[i]);
    }
    return 0;
}

/*
 * Güney Yılmaz
 * 21.12.2023 13.40
 * Description: Klavyeden girilen eleman sayısına göre bir dizi oluşturan ve bu dizinin tüm elemanlarını rasgele sayılarla dolduran programı yazınız.
 */