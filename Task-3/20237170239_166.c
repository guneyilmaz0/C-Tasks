#include <stdio.h>

int main() {
    int x;
    printf("Kilometre uzunlugu (x) giriniz: ");
    scanf("%d", &x);
    double mil = x * 0.621;
    printf("%lf mil", mil);
    return 0;
}

/*
 * Güney Yılmaz
 * 19.12.2023 00.46
 * Description: Klavyeden birimi kilometre olarak girilen bir uzunluğu mil birimine çevirip, ekrana yazdıran program.
 */

