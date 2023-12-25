#include <stdio.h>
#include "math.h"

double Seri(double n) {
    if (n < 1)
        return 0;
    else
        return ((pow(n, 2) - 1) / (pow(n, 3) + 2)) + Seri(n - 1);
}

int main() {
    double n, sonuc;
    printf("Seri acilimi icin sayi (n) giriniz: ");
    scanf("%lf", &n);
    sonuc = Seri(n);
    printf("Sonuc = %lf", sonuc);
    return 0;
}

/*
 * Güney Yılmaz
 * 20.12.2023 18.13
 * Description: Klavyeden girilen n sayısı için aşağıdaki seri hesaplamasını yapacak programı yazınız.
 * 0/3 + 3/10 + 8/29 + ... + (n^2-1)/(n^3+2)
 */