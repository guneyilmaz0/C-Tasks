#include <stdio.h>
#include "math.h"

int main() {
    for (int n = 0; n <= 4; n++) {
        long fermat = pow(2, pow(2, n)) + 1;
        printf("n=%d\t%ld\n", n, fermat);
    }
    return 0;
}

/*
 * Güney Yılmaz
 * 02.01.2024 14.12
 * Description: Bu örnekte 0 ile 4 arasındaki sayılar için hesaplanacak Fermat sayıları ekrana yazdırılacaktır.
 */
