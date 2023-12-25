#include <stdio.h>

int main() {
    int x;
    printf("Bir sayi giriniz.\n");
    scanf("%d", &x);

    if (x % 2 == 0) {
        printf("Girilen sayi cift sayidir.");
    } else {
        printf("Girilen sayi tek sayidir.");
    }
    return 0;
}

/*
 * Güney Yılmaz
 * 19.12.2023 00.24
 * Description: Klavyeden girilen sayının tek mi çift mi olduğunu bulup, ekrana yazdıran program.
 */