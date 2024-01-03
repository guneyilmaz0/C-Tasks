#include <stdio.h>
#include "math.h"

int main() {
    int n;
    double ort = 0, vry = 0, ss = 0;

    printf("Ogrenci adetini giriniz (n) : ");
    scanf("%d", &n);

    int notlar[n];

    for (int i = 0; i < n; i++) {
        printf("%d. Not : ", i + 1);
        scanf("%d", &notlar[i]);
        ort += notlar[i];
    }

    ort /= n;

    for (int i = 0; i < n; i++) {
        vry += pow(ort - (double)notlar[i], 2);
    }

    vry /= n;
    ss = pow(vry, 1.0 / 2.0);

    printf("Aritmetik Ortalama = %f\n", ort);
    printf("Varyans = %f\n", vry);
    printf("Standart Sapma = %f\n", ss);
    return 0;
}

/*
 * Güney Yılmaz
 * 03.01.2024 22.21
 * Description: Bu örnekte öğrencilerin standart sapma ve varyansı hesaplanarak ekrana yazdırılır.
 */

