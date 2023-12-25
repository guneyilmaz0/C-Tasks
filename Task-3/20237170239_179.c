#include <stdio.h>
#include <math.h>

int main() {
    double ort = 1.0;
    int n = 0, sayi = 0;

    do {
        printf("Bir sayi giriniz, cikmak icin 0 giriniz: ");
        scanf("%d", &sayi);
        if (sayi != 0) {
            ort *= sayi;
            n++;
        }
    } while (sayi != 0);

    ort = pow(ort, 1.0 / (double) n);
    printf("Geometrik Ortalama= %lf", ort);
    return 0;
}

/*
 * Güney Yılmaz
 * 19.12.2023 14.43
 * Description: Klavyeden 0 değeri girilene kadar, girilen tüm sayıların geometrik ortalamasını hesaplayan ve ekrana yazdıran program.
 */