#include <stdio.h>

#define PI 3.14
int main() {
    double r, hacim, alan;
    printf("Kurenin yaricapini (r) giriniz: ");
    scanf("%lf", &r);
    alan = 4 * PI * r * r;
    hacim = (4 / 3) * PI * r * r * r;
    printf("Alan= %lf\nHacim= %lf", alan, hacim);
    return 0;
}

/*
 * Güney Yılmaz
 * 19.12.2023 00.38
 * Description: Klavyeden yarıçap uzunluğu girilen kürenin alanını ve hacmini hesaplayıp, ekrana yazdıran program.
 */