#include <stdio.h>

int main() {
    double x, h, alan;
    printf("Ucgenin taban uzunlugunu (x) giriniz: ");
    scanf("%lf", &x);
    printf("Ucgenin yuksekligini (h) giriniz: ");
    scanf("%lf", &h);
    alan = x * h / 2;
    printf("Alan= %lf", alan);
    return 0;
}

/*
 * Güney Yılmaz
 * 19.12.2023 01.00
 * Description: Klavyeden taban ve yüksekliği girilen bir üçgeninalanını hesaplayan ve ekrana yazdıran program.
 */
