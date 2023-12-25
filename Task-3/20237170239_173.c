#include <stdio.h>

int main() {
    int a, b;
    printf("a sayisini girin: ");
    scanf("%d", &a);
    printf("b sayisini girin: ");
    scanf("%d", &b);

    if (a > b) {
        printf("a sayisi b sayisindan buyuktur.");
    } else if (b > a) {
        printf("b sayisi a sayisindan buyuktur.");
    } else {
        printf("Iki sayida birbirine esittir.");
    }
    return 0;
}

/*
 * Güney Yılmaz
 * 19.12.2023 01.12
 * Description: Klavyeden girilen iki sayı arasında büyüklük, küçüklük ve eşitlik durumlarını kontrol edip bu durumu ekrana yazdıran program.
 */
