#include <stdio.h>
#include "math.h"

int main() {
    for (int n = 1; n <= 20; n++) {
        long cullen = n * pow(2, n) + 1;
        printf("n=%ld\t", cullen);
        int bolen = 0;
        for (int i = 1; i <= cullen; i++) {
            if (cullen % i == 0) bolen++;
        }
        if (bolen == 2)
            printf("\t\tASAL\n");
        else
            printf("\n");
    }
    return 0;
}

/*
 * Güney Yılmaz
 * 02.01.2024 12.44
 * Description: Bu örnekte 1 ile 20 arasındaki sayılar için hesaplanacak Cullen sayıları ekrana yazdırılacaktır.
 * Aynı zamanda bu Cullen sayısı bir asal sayı (Cullen Asal Sayısı) ise ekrana asal sayı olduğuda belirtilecektir
 */
