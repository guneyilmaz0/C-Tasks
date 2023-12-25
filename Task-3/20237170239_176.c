#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    printf("Katsayi A giriniz: ");
    scanf("%lf", &a);
    printf("Katsayi B giriniz: ");
    scanf("%lf", &b);
    printf("Katsayi C giriniz: ");
    scanf("%lf", &c);
    double D = (b * b) - 4 * a * c;

    if (D > 0) {
        double kok1 = (-b + sqrt(D)) / (2 * a);
        double kok2 = (-b - sqrt(D)) / (2 * a);
        printf("Kok1 (x1) = %lf, Kok2 (x2) = %lf", kok1, kok2);
    } else if (D == 0) {
        double kok = -b / (2 * a);
        printf("Kok (x1) = %lf", kok);
    } else {
        printf("Reel kokler yoktur!");
    }
    return 0;
}

/*
 * Güney Yılmaz
 * 19.12.2023 01.22
 * Description: Klavyeden üç adet katsayısı da girilen bir ikinci dereceden denklemin köklerini hesaplayan program.
 */