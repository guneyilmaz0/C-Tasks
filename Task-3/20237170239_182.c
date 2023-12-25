#include <stdio.h>
#include <math.h>

int main() {
    double ort = 0, sayi = 0;
    int n = 0;
    do {
        printf("Bir sayi giriniz, cikmak icin 0 giriniz: ");
        scanf("%lf", &sayi);
        if (sayi != 0) {
            ort += 1.0 / sayi;
            n++;
        }
    } while (sayi != 0);
    ort = ((double) n) / ort;
    printf("Harmonik Ortalama= %lf", ort);
    return 0;
}

/*
 * Güney Yılmaz
 * 19.12.2023 15.00
 * Description: Klavyeden 0 değeri girilene kadar, girilen tüm sayıların harmonik ortalamasını hesaplayan ve ekrana yazdıran program.
 */