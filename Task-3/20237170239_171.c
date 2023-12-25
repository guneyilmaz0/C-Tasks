#include <stdio.h>
#include <math.h>
#define PI 3.14

int main() {
    double a, b, aci, alan;
    printf("Birinci kenar uzunlugunu (a) giriniz: ");
    scanf("%lf", &a);
    printf("Ikinci kenar uzunlugunu (b) giriniz: ");
    scanf("%lf", &b);
    printf("Kenarlar arasindaki aciyi (alfa-aci) giriniz: ");
    scanf("%lf", &aci);
    alan = a * b * sin(aci * PI / 180) / 2;
    printf("Alan= %lf", alan);
    return 0;
}

/*
 * Güney Yılmaz
 * 19.12.2023 01.05
 * Description: Klavyeden iki kenar uzunluğu ve bu iki kenar arasındaki açısı girilen üçgenin alanını hesaplayan program.
 */

