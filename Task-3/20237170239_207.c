#include <stdio.h>

double Seri(double n) {
    if (n < 1)
        return 0;
    else
        return (n / (n + 1)) + Seri(n - 1);
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
 * 20.12.2023 17.51
 * Description: Klavyeden girilen n sayısı için aşağıdaki seri hesaplamasını yapacak programı yazınız.
 * 1/2 + 2/3 + 3/4 + 4/5 + ... + n/(n+1)
 */