#include <stdio.h>

int main() {
    double k1, k2, cevre, alan;
    printf("Dikdortgenin uzunlugunu girini: ");
    scanf("%lf", &k1);
    printf("Dikdortgenin genisligini giriniz: ");
    scanf("%lf", &k2);
    cevre = 2 * (k1 + k2);
    alan = k1 * k2;
    printf("Cevre= %lf\nAlan= %lf", cevre, alan);
    return 0;
}

/*
 * Güney Yılmaz
 * 19.12.2023 00.33
 * Description: Klavyeden iki kenarı okunan dikdörtgenin çevresini ve alanını hesaplayıp, ekrana yazdıran program.
 */