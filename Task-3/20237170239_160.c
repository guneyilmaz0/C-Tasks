#include <stdio.h>

int main() {
    printf("Karenin bir kenar uzunlugunu giriniz:");
    double u, cevre, alan;
    scanf("%lf", &u);
    cevre = 4 * u;
    alan = u * u;
    printf("Cevre= %lf\nAlan= %lf", cevre, alan);
    return 0;
}

/*
 * Güney Yılmaz
 * 19.12.2023 00.28
 * Description: Klavyeden bir kenarı okunan karenin çevresini ve alanını hesaplayıp, ekrana yazdıran program.
 */