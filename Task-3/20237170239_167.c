#include <stdio.h>
#include <math.h>

int main() {
    double k1, k2, hipotenus;
    printf("Ucgenin 1. dik kenar uzunlugunu giriniz: ");
    scanf("%lf", &k1);
    printf("Ucgenin 2. dik kenar uzunlugunu giriniz: ");
    scanf("%lf", &k2);
    hipotenus = sqrt(k1 * k1 + k2 * k2);
    printf("Hipotenus= %lf", hipotenus);
    return 0;
}

/*
 * Güney Yılmaz
 * 19.12.2023 00.53
 * Description: Klavyeden iki dik kenar uzunluğu girilen bir üçgenin hipotenüs uzunluğunu Pisagor teoremi ile hesaplayan program.
 */
